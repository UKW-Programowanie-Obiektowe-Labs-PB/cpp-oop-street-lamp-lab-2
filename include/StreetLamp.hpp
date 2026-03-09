#pragma once

#include <string>

class StreetLamp {
public:
    StreetLamp(std::string id, int intensity, bool isManual);

    const std::string& getId() const;
    int getIntensity() const;
    bool getIsManual() const;

    void setIntensity(int value);

private:
    std::string id;
    int intensity;
    bool isManual;
};
