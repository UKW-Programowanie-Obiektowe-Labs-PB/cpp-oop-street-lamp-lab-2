#pragma once

#include "StreetLamp.hpp"
#include <vector>

class CityHub {
public:
    void addLamp(StreetLamp l);
    void showStatus() const;

private:
    std::vector<StreetLamp> lamps;
};
