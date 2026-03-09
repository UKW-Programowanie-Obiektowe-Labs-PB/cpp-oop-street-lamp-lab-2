#include "CityHub.hpp"
#include <iomanip>
#include <iostream>

void CityHub::addLamp(StreetLamp p_l) {
    lamps.push_back(p_l);
}

void CityHub::showStatus() {
    std::cout << std::left << std::setw(12) << "ID"
              << std::right << std::setw(12) << "Intensywność"
              << std::setw(10) << "Tryb" << "\n";
    std::cout << std::string(38, '-') << '\n';

    int lampCount = (int)lamps.size();
    for (int i = 0; i < lampCount; i++) {
        StreetLamp lamp = lamps[i];
        std::string mode = lamp.getIsManual() ? "ręczny" : "auto";
        std::cout << std::left << std::setw(12) << lamp.getId()
                  << std::right << std::setw(12) << lamp.getIntensity()
                  << std::setw(10) << mode << "\n";
    }
}
