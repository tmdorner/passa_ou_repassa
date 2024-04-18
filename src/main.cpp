#include <Arduino.h>
#include "soft_defines.hpp"
#include "player.hpp"

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i=0; i<NUMBER_OF_PLAYERS; i++) {
    if(players[i]->get_btn_value()) {

      Serial.write(players[i]->get_name());
      Serial.write("\r\n");

      players[i]->set_led_value(1);
      delay(5000);

      players[i]->set_led_value(0);
    }
  }
}

