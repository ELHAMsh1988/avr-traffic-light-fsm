#include "fsm.h"

TrafficLightState fsm_next(TrafficLightState current) {
    switch(current) {
        case RED: return RED_YELLOW;
        case RED_YELLOW: return GREEN;
        case GREEN: return YELLOW;
        case YELLOW: return RED;
        default: return RED;
    }
}

void fsm_init(void) {
    // Initialisierung falls nötig
}
