#include "square.h"
#include "math.h"

Square::Square(double frequency, double samplerate) : frequency(frequency),
  amplitude(1.0), phase(0), sample(0), samplerate(samplerate)
{
  std::cout << "Square - constructor\n";
}



Square::~Square() {
  std::cout << "Square - destructor\n";
}


double Square::getSample() {
  return sample;
}

void Square::tick() {
  // NOTE 1. - frequency / SAMPLERATE can be implemented in a more efficient way
  phase += frequency / samplerate;
  // wrap the phase so it stays in the interval [0, 1]
  if(phase > 1) phase -= 1.0;
  // square functionality comes here
  if(phase < 0.5) {
    sample = 1.0;
  } else {
    sample = -1.0;
  }
  sample *= amplitude;
}

//getters and setters
void Square::setFrequency(double frequency)
{
  // TODO add check to see if parameter is valid
  this->frequency = frequency;
}

double Square::getFrequency()
{
  return frequency;
}
