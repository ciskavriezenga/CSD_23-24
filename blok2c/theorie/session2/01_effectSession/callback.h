#ifndef CALLBACK_H
#define CALLBACK_H

#include "jack_module.h"
#include "tremolo.h"
#include "delay.h"


class CustomCallback : public AudioCallback {
public:
  void prepare(int rate) override;
  void process(AudioBuffer buffer) override;

private:
  float samplerate = 44100;
  Tremolo tremolo = Tremolo(6, 1);
  // TODO - implement Delay
  Delay delay = Delay(22050, 44100);
};

#endif //CALLBACK_H
