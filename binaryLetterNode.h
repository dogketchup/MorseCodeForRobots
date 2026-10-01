#pragma once
#include "alphabetStates.h"
#include "signalContext.h"

class ABinaryLetterState {
protected:
  SignalContext *_context;

public:
  ABinaryLetterState(SignalContext signalContext);
  virtual void IsSpace(SignalContext *context);
  virtual void IsDot(SignalContext *context);  // point to E
  virtual void IsDash(SignalContext *context); // point to T
};
