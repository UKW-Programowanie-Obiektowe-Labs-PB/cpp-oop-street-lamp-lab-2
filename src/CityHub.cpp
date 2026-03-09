// Wymaga GCC 13+ lub kompilatora z pełną obsługą std::format (C++20).
#include "CityHub.hpp"
#include <format>
#include <iostream>

void CityHub::addLamp(StreetLamp l) {
    lamps.push_back(std::move(l));
}

void CityHub::showStatus() const {
    std::cout << std::format("{:<12} {:>12} {:>10}\n", "ID", "Intensywność", "Tryb");
    std::cout << std::string(38, '-') << '\n';
    for (const auto& lamp : lamps) {
        std::string mode = lamp.getIsManual() ? "ręczny" : "auto";
        std::cout << std::format("{:<12} {:>12} {:>10}\n",
                                 lamp.getId(),
                                 lamp.getIntensity(),
                                 mode);
    }
}
