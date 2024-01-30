#include "callback.h"


void CustomCallback::prepare(int rate) {
    samplerate = (float) rate;
    std::cout << "\nsamplerate: " << samplerate << "\n";
    sine.prepare(rate);
}

void CustomCallback::process(AudioBuffer buffer) {
  auto [inputChannels, outputChannels, numInputChannels, numOutputChannels, numFrames] = buffer;

  // NOTE: mono for the sake of simplicity
  for (int channel = 0u; channel < 1; ++channel) {
    for (int sample = 0u; sample < numFrames; ++sample) {
      outputChannels[channel][sample] = inputChannels[0][sample];
    }
  }
}

