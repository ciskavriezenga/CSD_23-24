#include <iostream>
#include "oscillator.h"

void tempScope() {
  Oscillator tempOsc;
  std::cout << "___ created a temp osc ___";
  tempOsc.displayCount();
}

int main()
{

  Oscillator osc0;

  std::cout << "\nOsc0 freq: " << osc0.getFrequency() << std::endl;
  try{ osc0.setFrequency( -1);}
  catch(const char* msg){std::cout << msg << std::endl; }
  std::cout << "\nOsc0 freq: " << osc0.getFrequency() << std::endl;

  Oscillator osc1;
  Oscillator osc2;
  Oscillator osc3;

  // additional example - static variables and 'out of scope'
  osc0.displayCount();
  tempScope();
  osc0.displayCount();
  // end main
  return 0;
}
