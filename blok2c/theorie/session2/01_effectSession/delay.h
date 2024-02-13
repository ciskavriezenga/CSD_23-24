#pragma once
#include "effect.h"

class Delay : public Effect {
public:
  Delay(int delaySamples, int maxDelaySamples,
        float feedback = 0.0f, float dryWet = 1.0f);
  ~Delay();

  // setters & getters
  void setFeedback(float feedback);
private:

  float applyEffect(float sample) override;
  // hide default constructor
  Delay() {};
  float feedback;

  // static buffer for the sake of simplicity (#example)
  float buffer[44100];
};


