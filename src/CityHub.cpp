#include "CityHub.hpp"
#include <format>
#include <iostream>

void CityHub::addLamp(StreetLamp p_l) {
    lamps.push_back(p_l);
}

void CityHub::showStatus() {
    std::cout << std::format("{:<12} {:>12} {:>10}\n", "ID", "Intensywność", "Tryb");
    std::cout << std::string(38, '-') << '\n';

    int lampCount = lamps.size();
    for (int i = 0; i < lampCount; i++) {
        StreetLamp lamp = lamps[i];
        std::string mode = lamp.getIsManual() ? "ręczny" : "auto";
        std::cout << std::format("{:<12} {:>12} {:>10}\n",
                                 lamp.getId(),
                                 lamp.getIntensity(),
                                 mode);
    }
}
