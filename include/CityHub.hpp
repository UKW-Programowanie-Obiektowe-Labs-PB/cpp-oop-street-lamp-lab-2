#pragma once

#include "StreetLamp.hpp"
#include <vector>

class CityHub {
public:
    void addLamp(StreetLamp lamp);
    void showStatus();

private:
    std::vector<StreetLamp> lamps;
};
