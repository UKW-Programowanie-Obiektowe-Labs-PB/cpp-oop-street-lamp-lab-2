#include "StreetLamp.hpp"
#include <iostream>

StreetLamp::StreetLamp(std::string p_id, int p_intensity, bool p_isManual) {
    id = p_id;
    isManual = p_isManual;

    if (p_intensity < 0 || p_intensity > 100) {
        std::cerr << "[StreetLamp] Błąd: intensywność " << p_intensity
                  << " poza zakresem [0, 100]. Ustawiono wartość 0.\n";
        intensity = 0;
    } else {
        intensity = p_intensity;
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

void StreetLamp::setIntensity(int p_value) {
    if (p_value < 0 || p_value > 100) {
        std::cerr << "[StreetLamp] Błąd: intensywność " << p_value
                  << " poza zakresem [0, 100]. Wartość nie została zmieniona.\n";
        return;
    }
    intensity = p_value;
}
