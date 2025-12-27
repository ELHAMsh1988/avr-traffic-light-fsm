#ifndef FSM_H
#define FSM_H

typedef enum {
    RED,
    RED_YELLOW,
    GREEN,
    YELLOW
} TrafficLightState;

void fsm_init(void);
TrafficLightState fsm_next(TrafficLightState current);

#endif
