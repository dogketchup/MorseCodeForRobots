#include "abstractLetter.h"
class MorseSpace : public AbstractLetter {
public:
  MorseSpace() : AbstractLetter() {}
  MorseSpace(const char &asciiCode, const long &signalCode,
             CallbackPulsePtr ampFunc, CallbackDelayPtr periodFun)
      : AbstractLetter(asciiCode, signalCode, ampFunc, periodFun) {}

  ~MorseSpace() override = default;
  void GetTranslation() override;
};
