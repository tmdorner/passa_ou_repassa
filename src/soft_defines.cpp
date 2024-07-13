#include "soft_defines.hpp"

Player *players[NUMBER_OF_PLAYERS] = { \
    new Player(BLUE_PLAYER_BTN, BLUE_PLAYER_LED, "azul", BLUE_PLAYER_FREQ), \
    new Player(RED_PLAYER_BTN, RED_PLAYER_LED, "vermelho", RED_PLAYER_FREQ), \
    new Player(GREEN_PLAYER_BTN, GREEN_PLAYER_LED, "verde", GREEN_PLAYER_FREQ), \
    new Player(YELLOW_PLAYER_BTN, YELLOW_PLAYER_LED, "amarelo", YELLOW_PLAYER_FREQ) \
    };
