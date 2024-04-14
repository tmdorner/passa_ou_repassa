#include <Arduino.h>
#include "soft_defines.hpp"
#include "player.hpp"

void setup() {
}

void loop() {
  for (int i=0; i<NUMBER_OF_PLAYERS; i++) {
    if(players[i]->get_btn_value()) {
      players[i]->set_led_value(players[i]->get_btn_value());
    }
  }
}
