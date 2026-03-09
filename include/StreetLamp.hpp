#pragma once

#include <string>

class StreetLamp {
public:
    StreetLamp(std::string idValue, int intensityValue, bool manualMode);

    std::string getId();
    int getIntensity();
    bool getIsManual();

    void setIntensity(int value);

private:
    std::string id;
    int intensity;
    bool isManual;
};
