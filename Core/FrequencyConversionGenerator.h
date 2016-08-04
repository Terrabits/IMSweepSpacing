#ifndef FREQUENCYCONVERSIONGENERATOR_H
#define FREQUENCYCONVERSIONGENERATOR_H


// Project
#include "IntermodSettings.h"

// RsaToolbox
#include "VnaArbitraryFrequency.h"


class FrequencyConversionGenerator
{
public:
    FrequencyConversionGenerator(const IntermodSettings &settings, double centerFrequency_Hz);
   ~FrequencyConversionGenerator();

    // channel base frequency (fb)
    double channelStartFrequency_Hz() const;
    double channelStopFrequency_Hz () const;

    // inputs
    RsaToolbox::VnaArbitraryFrequency lowerInput()  const;
    RsaToolbox::VnaArbitraryFrequency upperInput()  const;

    // Intermod (output)
    RsaToolbox::VnaArbitraryFrequency lowerOutput(uint n) const;
    RsaToolbox::VnaArbitraryFrequency upperOutput(uint n) const;

private:
    IntermodSettings _settings;
    double           _center_Hz;
};

#endif // FREQUENCYCONVERSIONGENERATOR_H
