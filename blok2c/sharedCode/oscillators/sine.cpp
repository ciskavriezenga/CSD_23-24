#include "sine.h"
#include "math.h"


Sine::Sine() : Sine(0, 0) {}

// use default samplerate
Sine::Sine(float frequency) : Sine(frequency, 44100) {}

Sine::Sine(float frequency, float samplerate) :
  Oscillator(frequency, samplerate) {}

Sine::~Sine() {}

void Sine::calcNextSample()
{
  sample = sin(M_PI * 2 * phase);
}
