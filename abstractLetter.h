#pragma once

#include <ostream>

class AbstractLetter {
public:
  typedef void (*CallbackPulsePtr)(unsigned char);
  typedef void (*CallbackDelayPtr)(void);
  AbstractLetter();
  AbstractLetter(const char &asciiCode, const long &signalCode,
                 CallbackPulsePtr ampFunc, CallbackDelayPtr periodFun);
  virtual ~AbstractLetter() = default;
  virtual void GetTranslation();
  char GetLetter();
  friend std::ostream &operator<<(std::ostream &os, const AbstractLetter aL);

protected:
  char asciiCode;
  long pulseData;
  CallbackDelayPtr callbackDelay_ = nullptr;
  CallbackPulsePtr callbackPulse_ = nullptr;
};
