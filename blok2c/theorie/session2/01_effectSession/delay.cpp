#include "delay.h"


Delay::Delay(int delaySamples, int maxDelaySamples,
        float feedback, float dryWet) : Effect(dryWet){

}

Delay::~Delay() {}

float Delay::applyEffect(float sample) {

  // TODO implement delay functionality
  return sample;
}

void Delay::setFeedback(float feedback)
{
  // validate value
  if(feedback >=0.0f && feedback <= 0.99f) {
    this->feedback = feedback;
  } else {
    // TODO - log error
  }

}

