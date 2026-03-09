#pragma once

#include "StreetLamp.hpp"
#include <vector>

class CityHub {
public:
    void addLamp(StreetLamp p_l);
    void showStatus();

private:
    std::vector<StreetLamp> lamps;
};
