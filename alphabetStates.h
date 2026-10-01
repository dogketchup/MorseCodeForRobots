#pragma once
#include "binaryLetterNode.h"
#include "signalContext.h"

class EState : public ABinaryLetterState {
public:
  EState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class IState : public ABinaryLetterState {
  IState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class AState : public ABinaryLetterState {
  AState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class RState : public ABinaryLetterState {
  RState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class WState : public ABinaryLetterState {
  WState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class SState : public ABinaryLetterState {
  SState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class UState : public ABinaryLetterState {
  UState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class HState : public ABinaryLetterState {
  HState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class TState : public ABinaryLetterState {
public:
  TState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class NState : public ABinaryLetterState {
public:
  NState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class MState : public ABinaryLetterState {
public:
  MState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class BState : public ABinaryLetterState {
public:
  BState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class CState : public ABinaryLetterState {
public:
  CState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class DState : public ABinaryLetterState {
public:
  DState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class FState : public ABinaryLetterState {
public:
  FState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class GState : public ABinaryLetterState {
public:
  GState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class JState : public ABinaryLetterState {
public:
  JState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class KState : public ABinaryLetterState {
public:
  KState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class LState : public ABinaryLetterState {
public:
  LState(SignalContext signalContext) : ABinaryLetterCode(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class OState : public ABinaryLetterState {
public:
  OState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class PState : public ABinaryLetterState {
public:
  PState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class QState : public ABinaryLetterState {
public:
  QState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class VState : public ABinaryLetterState {
public:
  VState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class XState : public ABinaryLetterState {
public:
  XState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class YState : public ABinaryLetterState {
public:
  YState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};

class ZState : public ABinaryLetterState {
public:
  ZState(SignalContext signalContext) : ABinaryLetterState(signalContext) {
    this->_context = &signalContext;
  }
  void IsDot(SignalContext *context) override;
  void IsDash(SignalContext *context) override;
};
