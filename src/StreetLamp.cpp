#include "StreetLamp.hpp"
#include <iostream>

StreetLamp::StreetLamp(std::string idValue, int intensityValue, bool manualMode) {
    id = idValue;
    isManual = manualMode;

    if (intensityValue < 0 || intensityValue > 100) {
        std::cerr << "[StreetLamp] Błąd: intensywność " << intensityValue
                  << " poza zakresem [0, 100]. Ustawiono wartość 0.\n";
        intensity = 0;
    } else {
        intensity = intensityValue;
    }
}

std::string StreetLamp::getId() {
    return id;
}

int StreetLamp::getIntensity() {
    return intensity;
}

bool StreetLamp::getIsManual() {
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
