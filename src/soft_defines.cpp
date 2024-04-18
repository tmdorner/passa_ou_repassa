#include "soft_defines.hpp"

Player *players[NUMBER_OF_PLAYERS] = { \
    new Player(BLUE_PLAYER_BTN, BLUE_PLAYER_LED, "azul"), \
    new Player(RED_PLAYER_BTN, RED_PLAYER_LED, "vermelho"), \
    new Player(GREEN_PLAYER_BTN, GREEN_PLAYER_LED, "verde"), \
    new Player(YELLOW_PLAYER_BTN, YELLOW_PLAYER_LED, "amarelo") \
    };
