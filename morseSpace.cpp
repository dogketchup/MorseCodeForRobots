#include "morseSpace.h"
#include <iostream>
void MorseSpace::GetTranslation() {
  // std::cout << "inherited GetTranslation";
  // assuming before space there will be a 3 space character delay
  for (int i = 0; i < 2; i++) {
    callbackPulse_(0);
    callbackDelay_();
  }
}
