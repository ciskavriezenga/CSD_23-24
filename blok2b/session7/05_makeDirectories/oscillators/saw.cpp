#include "saw.h"
#include "math.h"

Saw::Saw(double frequency, double samplerate) : frequency(frequency),
  amplitude(1.0), phase(0.5), sample(0), samplerate(samplerate)
{
  std::cout << "Saw - constructor\n";
}



Saw::~Saw() {
  std::cout << "Saw - destructor\n";
}


double Saw::getSample() {
  return sample;
}

void Saw::tick() {
  // NOTE - frequency / SAMPLERATE can be implemented in a more efficient way
  phase += frequency / samplerate;
  // wrap the phase so it stays in the interval [0, 1]
  if(phase > 1) phase -= 1.0;
  // calculate saw wave
  sample = phase * 2.0 - 1.0;
  sample *= amplitude;
}

//getters and setters
void Saw::setFrequency(double frequency)
{
  // TODO add check to see if parameter is valid
  this->frequency = frequency;
}

double Saw::getFrequency()
{
  return frequency;
}
