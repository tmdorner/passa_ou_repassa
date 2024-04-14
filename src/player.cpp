#include "player.hpp"

Player::Player(uint8_t btn, uint8_t led) {
    btn_gpio = btn;
    led_gpio = led;

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