#pragma once
#include "effect.h"

#define BUFFER_SIZE 512

class WaveShaper : public Effect{
public:
  WaveShaper(float dryWet = 1.0);
  ~WaveShaper();

  // override base class method
  // applies tremolo effect to the input frame
  float applyEffect(const float input) override;

  inline double mapInRange (double factor, double xLow, double xHigh, double yLow, double yHigh) noexcept {return (yLow * (xHigh - factor) + yHigh * (factor - xLow)) / (xHigh - xLow);}inline double linearMap (double factor, double low, double high) noexcept {return mapInRange (factor, 0, 1, low, high);}

private:
  // hide default constructor
  WaveShaper();
  float buffer[BUFFER_SIZE];
};

