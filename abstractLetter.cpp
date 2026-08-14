#include "abstractLetter.h"
AbstractLetter::AbstractLetter() {}

AbstractLetter::AbstractLetter(const char &asciiCode, const long &signalCode,
                               CallbackPulsePtr pulseFun,
                               CallbackDelayPtr periodFun) {
  this->asciiCode = asciiCode;
  this->pulseData = signalCode;
  this->callbackPulse_ = pulseFun;
  this->callbackDelay_ = periodFun;
}
void AbstractLetter::GetTranslation() {
  // TODO: fuction needs iterate through pulse data
  long tempPulseData = this->pulseData;

  // i< 16 && (this->pulseData >> i | 0) awesome break I wrote but not needed
  // due to optimizing speed and actual morse signal
  // break on empty
  for (int i = 0; i < 4 && this->pulseData >> i * 4 | 0; i++) {
    unsigned char classificationCode =
        static_cast<unsigned char>((this->pulseData >> i * 4) & 0x0003);

    // should be either b0001 b0111 or 0000, 1,3,0
    // so this means hold for 1,3, or no timeintervals
    callbackPulse_(classificationCode);
    callbackDelay_();
  }
}

char AbstractLetter::GetLetter() { return this->asciiCode; }

std::ostream &operator<<(std::ostream &os, const AbstractLetter aL) {

  os << aL.asciiCode;
  return os;
}
