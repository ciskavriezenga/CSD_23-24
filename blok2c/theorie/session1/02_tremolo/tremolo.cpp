#include "tremolo.h"

Tremolo::Tremolo(float freq, float modDepth) : freq(freq), modDepth(modDepth)
{}

Tremolo::~Tremolo() {}

void Tremolo::initialize(float samplerate) {
  // NOTE: example, keeping things 'simple', hence no validation
  this->samplerate = samplerate;
  sine.initialize(samplerate);
}

float Tremolo::processFrame(float sample) {
  // transform sine in range [-1, 1] to range [0, 1]
  float modSignal = sine.genNextSample();
  // apply modDept
  modSignal *= modDepth;
  modSignal += 1.0 - modDepth;
  // apply modulation signal to input
  return sample * modSignal;
}

void Tremolo::setModFreq(float freq) {
  // NOTE: example, keeping things 'simple', hence no validation
  this->freq = freq;
}

