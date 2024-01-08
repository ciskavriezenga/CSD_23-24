#ifndef _SINE_H_
#define _SINE_H_
#include <iostream>

class Sine
{
public:
  //Constructor and destructor
  Sine(double frequency, double samplerate);
  ~Sine();

  //return the current sample
  double getSample();
  // go to next sample
  void tick();

  //getters and setters
  void setFrequency(double frequency);
  double getFrequency();

private:
  double frequency;
  double amplitude;
  double phase;
  // sample contains the current sample
  double sample;
  double samplerate;
};

#endif
