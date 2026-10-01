#pragma once
#include "abstractLetter.h"
#include "binaryLetterNode.h"

class SignalContext {
private:
  unsigned char _pushCount = 0;
  long _signalSoFar = 0;

public:
  ABinaryLetterState state;

  SignalContext();
  void AddDot();
  void AddDash();
  void AddSpace();
  void PushBitToSignal(unsigned char isHigh);
  AbstractLetter GetLetterFromMorse();
};
