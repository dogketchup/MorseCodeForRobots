#include "abstractLetter.h"
#include "morseAlphabet.h"
#include <chrono>
#include <iostream>
#include <linux/kd.h>
#include <sys/ioctl.h>
#include <thread>
#include <unistd.h>

#define TIME_INTERVAL 500

int main(void) {

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

  for (char c = 'a'; c < 'z'; c++) {
    std::cout << c;
    AbstractLetter cursor = ALPHABET_2_MORSE.at(c);
    cursor.GetTranslation();
    std::cout << std::endl;
  }
}

void pulseOn() {
  std::cout << "_";
  int freq = 440; // A4 note
  ioctl(STDOUT_FILENO, KIOCSOUND, 1193180 / freq);
}

void pulseOff() {
  std::cout << " ";
  ioctl(STDOUT_FILENO, KIOCSOUND, 0);
}
void period() {
  // std::this_thread::sleep_for(std::chrono::milliseconds(TIME_INTERVAL));
  usleep(TIME_INTERVAL);
}
