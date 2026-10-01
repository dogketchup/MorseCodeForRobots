#include "signalContext.h"

SignalContext::SignalContext() {
  this->_signalSoFar = 0;
  this->_pushCount = 0;
}
void SignalContext::AddDot() { this->state->IsDot(this->state); }
void SignalContext::AddDash() { this->state->IsDash(this->state); }
void SignalContext::AddSpace() { this->state->IsSpace(this->state); }
void SignalContext::PushBitToSignal(unsigned char isHigh) {
  this->_signalSoFar = (this->_signalSoFar << 1) | isHigh;

  // analyzing by nibble
  //  every 4 bit pushes, classify wether dot dash or space
  if (!this->_pushCount % 4) {
    unsigned char branch = static_cast<unsigned char>(this->_signalSoFar >>
                                                      (this->_pushCount - 4)) &
                           0x0003;
    switch (branch) {
    case 1: // 0001 or 0x0001
      this->AddDot();
    case 3: // 0011 or 0111 or 0x0007
      this->AddDash();
    case 0:             // 0000 0000 0000
      this->AddSpace(); // this should usually point to end of letter
    }
  }
}
