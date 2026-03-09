#include "StreetLamp.hpp"
#include <iostream>

StreetLamp::StreetLamp(std::string id, int intensity, bool isManual)
    : id{std::move(id)},
      intensity{(intensity >= 0 && intensity <= 100) ? intensity : 0},
      isManual{isManual}
{
    if (intensity < 0 || intensity > 100) {
        std::cerr << "[StreetLamp] Błąd: intensywność " << intensity
                  << " poza zakresem [0, 100]. Ustawiono wartość 0.\n";
    }
}

const std::string& StreetLamp::getId() const {
    return id;
}

int StreetLamp::getIntensity() const {
    return intensity;
}

bool StreetLamp::getIsManual() const {
    return isManual;
}

void StreetLamp::setIntensity(int value) {
    if (value < 0 || value > 100) {
        std::cerr << "[StreetLamp] Błąd: intensywność " << value
                  << " poza zakresem [0, 100]. Wartość nie została zmieniona.\n";
        return;
    }
    intensity = value;
}
