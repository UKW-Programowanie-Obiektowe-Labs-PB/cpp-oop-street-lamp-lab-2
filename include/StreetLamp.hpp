#pragma once

#include <string>

class StreetLamp {
public:
    StreetLamp(std::string p_id, int p_intensity, bool p_isManual);

    std::string getId();
    int getIntensity();
    bool getIsManual();

    void setIntensity(int p_value);

private:
    std::string id;
    int intensity;
    bool isManual;
};
