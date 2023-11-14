#include <iostream>
#include "oscillator.h"
Oscillator::Oscillator()
{
  std::cout << "\n* Oscillator::Oscillator - constructor\n";
  //set default frequency
  frequency = 220;
  count++;
}

Oscillator::~Oscillator()
{
  std::cout << "\n* Oscillator::~Oscillator - destructor\n";
  count--;
}

void Oscillator::setFrequency(float frequency)
{
  if(frequency >= 0) { //and also check < halfSamplerate
    this->frequency = frequency;
  } else {
    throw "Oscillator::setFrequency does not except negative numberes";
  }
}

float Oscillator::getFrequency()
{
  return frequency;
}

void Oscillator::displayCount()
{
  std::cout << "\nCount: " << count << std::endl;
}
// initialize count field
int Oscillator::count = 0;
