#include "player.hpp"

Player::Player(uint8_t btn, uint8_t led, String name, uint16_t freq) {
    btn_gpio = btn;
    led_gpio = led;
    color_name = name;
    frequency = freq;

    pinMode(btn_gpio, INPUT);
    pinMode(led_gpio, OUTPUT);

    set_led_value(0);
}

bool Player::get_btn_value() {
    return bool(digitalRead(btn_gpio));
}

void Player::set_led_value(uint8_t value){
    digitalWrite(led_gpio, value);
}

const char* Player::get_name() {
    return color_name.c_str();
}

uint16_t Player::get_frequency() {
    return frequency;
}