#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define EXTERNAL_NUM_INTERRUPTS 16
#define NUM_DIGITAL_PINS        40
#define NUM_ANALOG_INPUTS       16

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<40)?(p):-1)
#define digitalPinHasPWM(p)         (p < 34)

static const uint8_t LED_BUILTIN = 5;
#define BUILTIN_LED  LED_BUILTIN // backward compatibility
#define LED_BUILTIN LED_BUILTIN

static const uint8_t TX = 1;
static const uint8_t RX = 3;

static const uint8_t SDA = 21;
static const uint8_t SCL = 22;

static const uint8_t SS    = 5;
static const uint8_t MOSI  = 23;
static const uint8_t MISO  = 19;
static const uint8_t SCK   = 18;

static const uint8_t A0 = 36;
static const uint8_t A3 = 39;
static const uint8_t A4 = 32;
static const uint8_t A5 = 33;
static const uint8_t A6 = 34;
static const uint8_t A7 = 35;
static const uint8_t A10 = 4;
static const uint8_t A11 = 0;
static const uint8_t A12 = 2;
static const uint8_t A13 = 15;
static const uint8_t A14 = 13;
static const uint8_t A15 = 12;
static const uint8_t A16 = 14;
static const uint8_t A17 = 27;
static const uint8_t A18 = 25;
static const uint8_t A19 = 26;

static const uint8_t T0 = 4;
static const uint8_t T1 = 0;
static const uint8_t T2 = 2;
static const uint8_t T3 = 15;
static const uint8_t T4 = 13;
static const uint8_t T5 = 12;
static const uint8_t T6 = 14;
static const uint8_t T7 = 27;
static const uint8_t T8 = 33;
static const uint8_t T9 = 32;

static const uint8_t DAC1 = 25;
static const uint8_t DAC2 = 26;

// Auxillary Pins
static const uint8_t AUX1 = 14;
static const uint8_t AUX2 = 13;

// Motor Pins
static const uint8_t PHASE_U_HIGH   = 16;
static const uint8_t PHASE_U_LOW    = 17;
static const uint8_t PHASE_V_HIGH   = 18;
static const uint8_t PHASE_W_HIGH   = 19;
static const uint8_t PHASE_V_LOW    = 23;
static const uint8_t PHASE_W_LOW    = 33;
static const uint8_t CURRENT_SENSE  = 32;
static const uint8_t DRIVER_ENABLE  = 5;
static const uint8_t DRIVER_DIAG    = 34;
static const uint8_t PHASE_U_SENSE  = 35;
static const uint8_t PHASE_V_SENSE  = 36;
static const uint8_t PHASE_W_SENSE  = 39;

// Peripheral Pins
static const uint8_t NEOPIXEL_DATA  = 2;
static const uint8_t TMAG5273_INT   = 4;
static const uint8_t RX1_PIN        = 15;
static const uint8_t TX1_PIN        = 12;

#endif /* Pins_Arduino_h */