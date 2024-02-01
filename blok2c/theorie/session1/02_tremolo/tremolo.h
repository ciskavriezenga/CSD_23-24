#pragma once

#include <iostream>
#include "sine.h"

class Tremolo
{
public:
  Tremolo(float freq, float modDepth);
  ~Tremolo();

  void prepare(float samplerate);
  float processFrame(float sample);

  // setters and getters
  void setModFreq(float freq);

private:
  // default samplerate
  float samplerate = 44100;
  float freq;
  float modDepth;
  Sine sine;

  // hide default constructor
  Tremolo(){}
};
