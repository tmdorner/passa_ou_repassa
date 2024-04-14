#ifndef PLAYER_H
#define PLAYER_H

#include <Arduino.h>

class Player {
    private:
        uint8_t btn_gpio;
        uint8_t led_gpio;

    public:
        Player(uint8_t btn, uint8_t led);
        bool get_btn_value();
        void set_led_value(uint8_t value);

};

#endif