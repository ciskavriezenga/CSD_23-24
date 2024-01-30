#pragma once

#include <iostream>
#include "sine.h"

class Tremolo
{
public:
  Tremolo(float freq, float modDepth);
  ~Tremolo();

  void initialize(float samplerate);
  float processFrame(float sample);

  // setters and getters
  void setModFreq(float freq);

private:
  Sine sine;
  float freq;
  float modDepth;

  // default samplerate
  float samplerate = 44100;

  // hide default constructor
  Tremolo(){}
};
