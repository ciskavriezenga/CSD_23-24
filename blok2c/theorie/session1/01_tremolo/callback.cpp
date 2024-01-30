#include "callback.h"


void CustomCallback::prepare(int rate) {
    samplerate = (float) rate;
    std::cout << "\nsamplerate: " << samplerate << "\n";
    sine.initialize(rate);
}

void CustomCallback::process(AudioBuffer buffer) {
  // NOTE: mono
  for (int i = 0; i < buffer.numFrames; ++i) {
    // TODO - add Tremelo
    // pass through
    // buffer.outputChannels[0][i] = buffer.inputChannels[0][i];
    buffer.outputChannels[0][i] = sine.genNextSample();
  }
}
