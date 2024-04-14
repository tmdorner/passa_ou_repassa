#include "soft_defines.hpp"

Player blue_player(BLUE_PLAYER_BTN, BLUE_PLAYER_LED);
Player red_player(RED_PLAYER_BTN, RED_PLAYER_LED);
Player green_player(GREEN_PLAYER_BTN, GREEN_PLAYER_LED);
Player yellow_player(YELLOW_PLAYER_BTN, YELLOW_PLAYER_LED);

Player *players[NUMBER_OF_PLAYERS] = {&blue_player, &red_player, &green_player, &yellow_player};