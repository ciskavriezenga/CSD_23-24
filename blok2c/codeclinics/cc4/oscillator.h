//
// Created by Dean on 16/02/2024.
//

#pragma once

#include <cmath>
#include <numbers>


struct Oscillator {
    void prepare(double sampleRate){
        Fs = sampleRate;
    }

    virtual double calculate() = 0;

    double output() {
        phase += delta;
        if (phase > 1.0) phase -= 1.0;
        return calculate();
    }

    void setFrequency (double freq) {
        frequency = freq;
        delta = frequency / Fs;
    }


protected:
    double Fs { 0 };
    double phase { 0 };
    double frequency { 0 };
    double delta { 0 };
};


struct Sine : public Oscillator {
    explicit Sine () : Oscillator () {}

    double calculate() override {
        return sin (phase * pi * 2.0);
    }

private:
    double pi = std::numbers::pi_v<double>;
};

struct Saw : public Oscillator {
    explicit Saw () : Oscillator () {}

    double calculate() override {
        return phase * 2.0 - 1.0;
    }
};