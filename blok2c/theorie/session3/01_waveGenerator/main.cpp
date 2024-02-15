#include <iostream>
#include "wavetableGenerator.h"
#include "bufferDebugger.h"

#define BUFFER_SIZE 512

int main() {
  // generate wavetable and fill with sine waveform
  float wavetable[BUFFER_SIZE];

  WavetableGenerator::generateSCurve(wavetable, BUFFER_SIZE, 10.0f);

  BufferDebugger::writeToFile(wavetable, BUFFER_SIZE, "output.csv");

  std::cout << "\n***** DONE ***** "
    << "\nOutput is written to file output.csv" << std::endl;
}
