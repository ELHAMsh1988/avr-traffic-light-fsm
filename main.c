#include <avr/io.h>
#include <util/delay.h>
#include "fsm.h"

#define RED_LED     PB0
#define YELLOW_LED  PB1
#define GREEN_LED   PB2

void leds_init(void) {
    DDRB |= (1<<RED_LED) | (1<<YELLOW_LED) | (1<<GREEN_LED);
}

void set_led(TrafficLightState state) {
    PORTB = 0;
    switch(state) {
        case RED: PORTB |= (1<<RED_LED); break;
        case RED_YELLOW: PORTB |= (1<<RED_LED) | (1<<YELLOW_LED); break;
        case GREEN: PORTB |= (1<<GREEN_LED); break;
        case YELLOW: PORTB |= (1<<YELLOW_LED); break;
    }
}

int main(void) {
    leds_init();
    fsm_init();
