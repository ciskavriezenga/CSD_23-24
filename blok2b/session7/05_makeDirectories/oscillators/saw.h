#ifndef _SAW_H_
#define _SAW_H_
#include <iostream>

class Saw
{
public:
  //Constructor and destructor
  Saw(double frequency, double samplerate);
  ~Saw();

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
