#include "CityHub.hpp"
#include "StreetLamp.hpp"

int main() {
    CityHub hub;

    hub.addLamp(StreetLamp("L001", 75, false));
    hub.addLamp(StreetLamp("L002", 150, true));  // błędna intensywność – test std::cerr
    hub.addLamp(StreetLamp("L003", 30, false));

    hub.showStatus();

    return 0;
}
