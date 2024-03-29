/*
 *  Name: Spencer Hubbard
 *  Date: 4/23/15
 *  CS 362 Assignment 2
 *
 *  This is a card test that checks the effect of the village card. The village
 *  cards effect is +2 action and +1 card.
 */

#include <stddef.h>  // for NULL, size_t
#include <stdbool.h> // for bool
#include <stdio.h>   // for printf()
#include <stdlib.h>  // for malloc(), free(), exit(), rand(), srand()

#include "dominion.h"
#include "rngs.h"
#include "CS362.h"

#define RANDOM_SEED 42
#define NUM_PLAYERS 2

static int kingdom_cards[10] = {adventurer, council_room, feast, gardens, mine,
    remodel, smithy, village, baron, great_hall};

int main(int argc, char **argv) {
  // initial setup
  struct gameState state;
  initializeGame(NUM_PLAYERS, kingdom_cards, RANDOM_SEED, &state);
  int whoseTurn = state.whoseTurn;

  // make sure phase = 0, numActions > 0, handCount > 0
  state.phase = 0;
  state.numActions = state.numActions > 0 ? state.numActions : 1;
  state.deckCount[whoseTurn] = state.deckCount[whoseTurn] > 0 ? state.deckCount[whoseTurn] : 2;
  state.handCount[whoseTurn] = state.handCount[whoseTurn] > 0 ? state.handCount[whoseTurn] : 1;

  // record state before card effect
  state.hand[whoseTurn][0] = village;
  int numActions = state.numActions;
  int handCount = state.handCount[whoseTurn];
  int deckCount = state.deckCount[whoseTurn];
  int playedCardCount = state.playedCardCount;

  // should play 1 card, remove 1 card from deck and add to hand
  // should play 1 action and gain 2 action
  // don't check return value of playCard because not unit test for playCard
  playCard(0, 0, 0, 0, &state);

  // test state after card effect
  Verify362(whoseTurn == state.whoseTurn);
  Verify362(handCount - 1 + 1 == state.handCount[whoseTurn]);
  Verify362(deckCount - 1 == state.deckCount[whoseTurn]);
  Verify362(numActions - 1 + 2 == state.numActions);
  printf("unit test for village card passed\n");

  return EXIT_SUCCESS;
}
