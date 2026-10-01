#include <alsa/asoundlib.h>
#include <cmath>
#include <iostream>
#include <vector>

class MorseAudioController {
private:
  snd_pcm_t *pcm_handle;
  const int SAMPLE_RATE = 44100;
  const double FREQUENCY = 700.0;
  const int BASE_UNIT_MS = 100; // Duration of one discrete time step (a "dot")

  int samples_per_tick;
  double current_phase;

  // Helper to write data to the ALSA PCM device
  void write_to_pcm(const std::vector<int16_t> &buffer) {
    snd_pcm_sframes_t frames =
        snd_pcm_writei(pcm_handle, buffer.data(), buffer.size());
    if (frames < 0) {
      frames = snd_pcm_recover(pcm_handle, frames, 0);
    }
    if (frames < 0) {
      std::cerr << "Error writing to PCM device: " << snd_strerror(frames)
                << "\n";
    }
  }

public:
  MorseAudioController() {
    int err = snd_pcm_open(&pcm_handle, "default", SND_PCM_STREAM_PLAYBACK, 0);
    if (err < 0) {
      std::cerr << "Error opening PCM device: " << snd_strerror(err) << "\n";
      exit(1);
    }

    err = snd_pcm_set_params(pcm_handle, SND_PCM_FORMAT_S16_LE,
                             SND_PCM_ACCESS_RW_INTERLEAVED, 1, SAMPLE_RATE, 1,
                             50000);
    if (err < 0) {
      std::cerr << "Error setting hardware parameters: " << snd_strerror(err)
                << "\n";
      exit(1);
    }

    samples_per_tick = (SAMPLE_RATE * BASE_UNIT_MS) / 1000;
    current_phase = 0.0; // Initialize continuous phase
  }

  ~MorseAudioController() {
    snd_pcm_drain(pcm_handle);
    snd_pcm_close(pcm_handle);
  }

  // Single pulse function: 1 = Tone, 0 = Silence
  void pulse(int state) {
    std::vector<int16_t> buffer(samples_per_tick);
    double phase_increment = 2.0 * M_PI * FREQUENCY / SAMPLE_RATE;

    for (int i = 0; i < samples_per_tick; ++i) {
      if (state == 1) {
        // Generate sine wave and advance phase
        buffer[i] = static_cast<int16_t>(32767.0 * std::sin(current_phase));
      } else {
        // Silence, but still advance phase to keep timing strict
        buffer[i] = 0;
      }

      current_phase += phase_increment;

      // Keep phase within 0 to 2*PI to prevent float overflow on long runs
      if (current_phase >= 2.0 * M_PI) {
        current_phase -= 2.0 * M_PI;
      }
    }

    write_to_pcm(buffer);
  }
};
