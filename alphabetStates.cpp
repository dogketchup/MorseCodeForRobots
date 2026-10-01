#include "alphabetStates.h"
#include "signalContext.h"

// --- E ( . ) ---
void EState::IsDot(SignalContext *context) {
  context->state = IState(context->state);
}
void EState::IsDash(SignalContext *context) {
  context->state = AState(context->state);
}

// --- I ( .. ) ---
void IState::IsDot(SignalContext *context) {
  context->state = SState(context->state);
}
void IState::IsDash(SignalContext *context) {
  context->state = UState(context->state);
}

// --- S ( ... ) ---
void SState::IsDot(SignalContext *context) {
  context->state = HState(context->state);
}
void SState::IsDash(SignalContext *context) {
  context->state = VState(context->state);
}

// --- H ( .... ) ---
void HState::IsDot(SignalContext *context) {}
void HState::IsDash(SignalContext *context) {}

// --- V ( ...- ) ---
void VState::IsDot(SignalContext *context) {}
void VState::IsDash(SignalContext *context) {}

// --- U ( ..- ) ---
void UState::IsDot(SignalContext *context) {
  context->state = FState(context->state);
}
void UState::IsDash(Context *context) {} // No letter for ..--

// --- F ( ..-. ) ---
void FState::IsDot(SignalContext *context) {}
void FState::IsDash(SignalContext *context) {}

// --- A ( .- ) ---
void AState::IsDot(SignalContext *context) {
  context->state = RState(context->state);
}
void AState::IsDash(SignalContext *context) {
  context->state = WState(context->state);
}

// --- R ( .-. ) ---
void RState::IsDot(SignalContext *context) {
  context->state = LState(context->state);
}
void RState::IsDash(SignalContext *context) {
} // No letter for .--. in this specific branch

// --- L ( .-.. ) ---
void LState::IsDot(SignalContext *context) {}
void LState::IsDash(SignalContext *context) {}

// --- W ( .-- ) ---
void WState::IsDot(SignalContext *context) {
  context->state = PState(context->state);
}
void WState::IsDash(SignalContext *context) {
  context->state = JState(context->state);
}

// --- P ( .--. ) ---
void PState::IsDot(SignalContext *context) {}
void PState::IsDash(SignalContext *context) {}

// --- J ( .--- ) ---
void JState::IsDot(SignalContext *context) {}
void JState::IsDash(SignalContext *context) {}

// --- T ( - ) ---
void TState::IsDot(SignalContext *context) {
  context->state = NState(context->state);
}
void TState::IsDash(SignalContext *context) {
  context->state = MState(context->state);
}

// --- N ( -. ) ---
void NState::IsDot(SignalContext *context) {
  context->state = DState(context->state);
}
void NState::IsDash(SignalContext *context) {
  context->state = KState(context->state);
}

// --- D ( -.. ) ---
void DState::IsDot(SignalContext *context) {
  context->state = BState(context->state);
}
void DState::IsDash(SignalContext *context) {
  context->state = XState(context->state);
}

// --- B ( -... ) ---
void BState::IsDot(SignalContext *context) {}
void BState::IsDash(SignalContext *context) {}

// --- X ( -..- ) ---
void XState::IsDot(SignalContext *context) {}
void XState::IsDash(SignalContext *context) {}

// --- K ( -.- ) ---
void KState::IsDot(SignalContext *context) {
  context->state = CState(context->state);
}
void KState::IsDash(SignalContext *context) {
  context->state = YState(context->state);
}

// --- C ( -.-. ) ---
void CState::IsDot(SignalContext *context) {}
void CState::IsDash(SignalContext *context) {}

// --- Y ( -.-- ) ---
void YState::IsDot(SignalContext *context) {}
void YState::IsDash(SignalContext *context) {}

// --- M ( -- ) ---
void MState::IsDot(SignalContext *context) {
  context->state = GState(context->state);
}
void MState::IsDash(SignalContext *context) {
  context->state = OState(context->state);
}

// --- G ( --. ) ---
void GState::IsDot(SignalContext *context) {
  context->state = ZState(context->state);
}
void GState::IsDash(SignalContext *context) {
  context->state = QState(context->state);
}

// --- Z ( --.. ) ---
void ZState::IsDot(SignalContext *context) {}
void ZState::IsDash(SignalContext *context) {}

// --- Q ( --.- ) ---
void QState::IsDot(SignalContext *context) {}
void QState::IsDash(SignalContext *context) {}

// --- O ( --- ) ---
void OState::IsDot(SignalContext *context) {}
void OState::IsDash(SignalContext *context) {}
