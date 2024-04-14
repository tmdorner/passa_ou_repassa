#ifndef SOFT_DEFINES_H
#define SOFT_DEFINES_H

#include "hard_defines.hpp"
#include "player.hpp"

#define NUMBER_OF_PLAYERS 4

extern Player blue_player;
extern Player red_player;
extern Player green_player;
extern Player yellow_player;

extern Player *players[NUMBER_OF_PLAYERS];

#endif