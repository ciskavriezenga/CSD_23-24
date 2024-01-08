#include "sine.h"
#include "math.h"

Sine::Sine(double frequency, double samplerate) : frequency(frequency),
  amplitude(1.0), phase(0), sample(0), samplerate(samplerate)
{
  std::cout << "Sine - constructor\n";
}



Sine::~Sine() {
  std::cout << "Sine - destructor\n";
}


double Sine::getSample() {
  return sample;
}

void Sine::tick() {
  // NOTE - frequency / SAMPLERATE can be implemented in a more efficient way
  phase += frequency / samplerate;

  // wrap the phase so it stays in the interval [0, 1]
  if(phase > 1) phase -= 1.0;
  sample = sin(M_PI * 2 * phase) * amplitude;
}

//getters and setters
void Sine::setFrequency(double frequency)
{
  // TODO add check to see if parameter is valid
  this->frequency = frequency;
}

double Sine::getFrequency()
{
  return frequency;
}
