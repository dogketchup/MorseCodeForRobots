#include "abstractLetter.h"
#include "morseAlphabet.h"
#include "slopTone.cpp"
#include <bitset>
#include <chrono>
#include <iostream>
#include <linux/kd.h>
#include <sys/ioctl.h>
#include <thread>
#include <unistd.h>

#define TIME_INTERVAL 100
MorseAudioController morse;

void morsePrint(const char a[], int size);

int main(int argc, char *argv[]) {

  /*
    AbstractLetter letterA;
    letterA = AbstractLetter('a', 0x0071, &pulseOn, &pulseOff, &period);
    letterA.GetTranslation();
    */
  // AbstractLetter cursor = ALPHABET_2_MORSE.at('a');
  // cursor.GetTranslation();
  // std::cout << std::endl;
  // std::cout << "startB";
  // AbstractLetter letterB;
  // letterB = AbstractLetter('b', 0x1117, &pulseOn, &pulseOff, &period);
  // letterB.GetTranslation();
  // std::cout << std::endl;
  //
  AbstractLetter gap;
  gap = SPACE;

  // for (char c = 'a'; c <= 'z'; c++) {
  //   std::cout << c;
  //   AbstractLetter cursor = ALPHABET_2_MORSE.at(c);
  //   cursor.GetTranslation();
  //   std::cout << std::endl;
  //   gap.GetTranslation();
  // }

  if (argc > 1) {
    std::cout << strlen(argv[1]);
    morsePrint(argv[1], strlen(argv[1]));

  } else {
    morsePrint("read me", 7);
  }
}

void pulseOn() { std::cout << "-"; }

void pulseOff() { std::cout << "_"; }

void morsePrint(const char a[], int size) {
  for (int i = 0; i < size; i++) {
    AbstractLetter *current = ALPHABET_2_MORSE.at(a[i]);
    // std::cout << current->GetLetter();
    std::bitset<32> bits(current->GetLetter());
    // std::cout << std::endl << a[i] << bits << std::endl;
    current->GetTranslation();
    // letter end 3 units
    for (int i = 0; i < 2; i++) {
      pulseOff();
      period();
    }
  }
}

//****************Populate callbacks*********************
void pulse(unsigned char status) {
  std::bitset<4> bits(status);
  // std::cout << static_cast<int>(status);

  for (unsigned char c = 0; c <= status - 1; c++) {
    pulseOn();
    period();
  }
  pulseOff();
}

void period() {
  // std::cout << "|";
  //   pulseOff();
  // std::this_thread::sleep_for(std::chrono::milliseconds(TIME_INTERVAL));

  usleep(TIME_INTERVAL);
}
