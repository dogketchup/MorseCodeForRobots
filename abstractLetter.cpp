#include "abstractLetter.h"
AbstractLetter::AbstractLetter() {}

AbstractLetter::AbstractLetter(const char &asciiCode, const long &signalCode,
                               CallbackPulseHighPtr highFunc,
                               CallbackPulseLowPtr lowFun,
                               CallbackDelayPtr periodFun) {
  this->asciiCode = asciiCode;
  this->pulseData = signalCode;
  this->callbackHigh_ = highFunc;
  this->callbackLow_ = lowFun;
  this->callbackDelay_ = periodFun;
}
void AbstractLetter::GetTranslation() {
  // TODO: fuction needs iterate through pulse data
  long tempPulseData = this->pulseData;

  for (int i = 0; i < 16; i++) {
    bool isHigh = static_cast<bool>(this->pulseData >> i & 0x0001);
    if (isHigh) {
      this->callbackHigh_();
    } else {
      this->callbackLow_();
    }
    this->callbackDelay_();
  }
}

std::ostream &operator<<(std::ostream &os, const AbstractLetter aL) {

  os << aL.asciiCode;
  return os;
}
