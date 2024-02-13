#pragma once

class Effect
{
public:
  // drywet: drywet balance
  // drywet == 0:     dry
  // 0 < drywet < 1:  mix
  // drywet == 1:     wet
  // default is wet
  Effect(float dryWet = 1.0);
  virtual ~Effect();
  float processFrame(float input);
protected:
  // abstract method
  virtual float applyEffect(float input) = 0;
private:
  //hide default constructor
};
