#pragma once

#include <ostream>

class AbstractLetter {
protected:
  char asciiCode;
  long pulseData;

public:
  typedef void (*CallbackPulseHighPtr)(void);
  typedef void (*CallbackPulseLowPtr)(void);
  typedef void (*CallbackDelayPtr)(void);
  AbstractLetter();
  AbstractLetter(const char &asciiCode, const long &signalCode,
                 CallbackPulseHighPtr highFunc, CallbackPulseLowPtr lowFun,
                 CallbackDelayPtr periodFun);
  virtual void GetTranslation();
  friend std::ostream &operator<<(std::ostream &os, const AbstractLetter aL);

private:
  CallbackPulseHighPtr callbackHigh_ = nullptr;
  CallbackPulseLowPtr callbackLow_ = nullptr;
  CallbackDelayPtr callbackDelay_ = nullptr;
};
