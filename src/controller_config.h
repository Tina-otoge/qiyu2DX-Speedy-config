#ifndef CONTROLLER_CONFIG_H
#define CONTROLLER_CONFIG_H

#define SW_GPIO_SIZE 7               // Number of switches
#define LED_GPIO_SIZE 7              // Number of switch LEDs
#define ENC_GPIO_SIZE 1              // Number of encoders
#define ENC_PPR 72                   // Encoder PPR
#define MOUSE_SENS 1                 // Mouse sensitivity multiplier
#define ENC_DEBOUNCE false           // Encoder Debouncing
#define SW_DEBOUNCE_TIME_US 4000     // Switch debounce delay in us
#define ENC_PULSE (ENC_PPR * 4)      // 4 pulses per PPR
#define REACTIVE_TIMEOUT_MAX 1000000 // HID to reactive timeout in us
#define WS2812B_LED_SIZE 0           // Number of WS2812B LEDs
#define WS2812B_LED_ZONES 2          // Number of WS2812B LED Zones
#define WS2812B_LEDS_PER_ZONE \
  WS2812B_LED_SIZE / WS2812B_LED_ZONES // Number of LEDs per zone

#ifdef PICO_GAME_CONTROLLER_C

// MODIFY KEYBINDS HERE, MAKE SURE LENGTHS MATCH SW_GPIO_SIZE
const uint8_t SW_KEYCODE[] = {HID_KEY_1, HID_KEY_2, HID_KEY_3, HID_KEY_4,
                              HID_KEY_5, HID_KEY_6, HID_KEY_7};

/*
P1_SW1 = "GPIO10"
P1_SW2 = "GPIO13"
P1_SW3 = "GPIO11"
P1_SW4 = "GPIO9"
P1_SW5 = "GPIO12"
P1_SW6 = "GPIO7"
P1_SW7 = "GPIO8"
*/
/*
P2_SW1 = "GPIO13"
P2_SW2 = "GPIO10"
P2_SW3 = "GPIO9"
P2_SW4 = "GPIO8"
P2_SW5 = "GPIO7"
P2_SW6 = "GPIO12"
P2_SW7 = "GPIO11"
*/
// P1
const uint8_t SW_GPIO[] = {
    10,
    13,
    11,
    9,
    12,
    7,
    8,
};
const uint8_t LED_GPIO[] = {
    3,
    6,
    4,
    2,
    5,
    0,
    1,
};
/* */
/* */
// P2
// const uint8_t SW_GPIO[] = {
//     13,
//     10,
//     9,
//     8,
//     7,
//     12,
//     11,
// };
// const uint8_t LED_GPIO[] = {
//     6, // SW1
//     3, // SW2
//     2, // SW3
//     1, // SW4
//     0, // SW5
//     5, // SW6
//     4, // SW7
// };
/* */
const uint8_t ENC_GPIO[] = {14}; // L_ENC(0, 1); R_ENC(2, 3)
const bool ENC_REV[] = {false};  // Reverse Encoders
const uint8_t WS2812B_GPIO = 28;

#endif

extern bool joy_mode_check;

#endif
