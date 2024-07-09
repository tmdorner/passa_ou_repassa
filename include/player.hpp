#ifndef PLAYER_H
#define PLAYER_H

#include <Arduino.h>

class Player {
    private:
        uint8_t btn_gpio;
        uint8_t led_gpio;
        uint16_t frequency;
        String color_name;

    public:
        Player(uint8_t btn, uint8_t led, String name);
        bool get_btn_value();
        void set_led_value(uint8_t value);
        const char* get_name();
        uint16_t get_frequency();

};

#endif