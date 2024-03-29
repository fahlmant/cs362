/*
Name: unittest1.c

Purpose: Let's test drawing a card!
 */

#include "dominion.h"
#include "dominion_helpers.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
printf("Testing card drawing\n");

struct gameState *game = newGame();
game->deckCount[0] = 0;
game->discardCount[0] = 5;

drawCard(0, game);
int count = game->handCount[0];//Get current hand count for player
    if (DEBUG){//Debug statements
      printf("Current hand count: %d\n", count);
      
    }
printf("Card Draw Testing complete\n");
}


