#include "binaryLetterNode.h"
#include "signalContext.h"

void ABinaryLetterState::IsSpace(SignalContext *context) {}

void ABinaryLetterState::IsDot(SignalContext *context) {
  context->state = EState(context->state);
} // point to E
//
void ABinaryLetterState::IsDash(SignalContext *context) {
  context->state = TState(context->state);
} // point to T
