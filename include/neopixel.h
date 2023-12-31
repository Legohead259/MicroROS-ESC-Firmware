#ifndef NEOPIXEL_H
#define NEOPIXEL_H

#include <Adafruit_NeoPixel.h>
#include "state_machine.h"

#define NUM_PIXELS 1
#define MAX_BRIGHTNESS 32
#define BLINK_PERIOD 500 // ms
#define IDENTIFY_TIMEOUT 5000 // ms

extern Adafruit_NeoPixel strip;

const uint32_t LED_OFF  = strip.Color(0, 0, 0);
const uint32_t WHITE    = strip.Color(255, 255, 255);
const uint32_t BLUE     = strip.Color(0, 0, 255);
const uint32_t GREEN    = strip.Color(0, 255, 0);
const uint32_t RED      = strip.Color(255, 0, 0);
const uint32_t CYAN     = strip.Color(0, 255, 255);
const uint32_t MAGENTA  = strip.Color(255, 0, 255);
const uint32_t YELLOW   = strip.Color(255, 255, 0);
const uint32_t ORANGE   = strip.Color(255, 165, 0);

// Class representing the state machine
class LEDStateMachine : public StateMachine {
public:
    // Constructor
    LEDStateMachine(State &initialState) : StateMachine(initialState) {}

    void begin(void);

    // Function to perform actions based on the current state
    void executeState();

private:
    void setLEDColor(uint32_t color);
    void asyncBlink(uint32_t color, uint32_t interval=BLINK_PERIOD);
    void asyncAlternatingBlink(uint32_t firstColor, uint32_t secondColor, uint32_t interval=BLINK_PERIOD);
};

extern LEDStateMachine ledStateMachine;

extern TaskHandle_t ledTask;
void ledTaskCallback( void * parameter);

#endif // NEOPIXEL_H