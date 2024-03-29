#include "dominion.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_TESTS 50000

//This randomly tests a full dominion game

void assignCards(int k[10], int size, int* cardSet);
void makeKingdomCards(int k[10]);
void buyCards(int player, struct gameState *state);
void playCards(int player, struct gameState *state);
void printHand(int player, struct gameState *state);

static const char *CARD_NAMES[] = {"curse","estate","duchy","province","copper","silver","gold",
								   "adventurer","council_room","feast","gardens","mine","remodel","smithy",
								   "village","baron","great_hall","minion","steward","tribute","ambassador",
   								   "cutpurse","embargo","outpost","salvager","sea_hag","treasure_map"};
static const int CARD_COSTS[] = {0, 2, 5, 8, 0, 3, 6,
								   6, 5, 4, 4, 5, 4, 4,
								   3, 4, 3, 5, 3, 5, 3,
								   4, 2, 5, 4, 4, 4};

int main() {

	srand(2);
	int k[10];
	makeKingdomCards(k);

	int players, turn = 1, player;
	//struct gameState state;
	struct gameState* p = newGame();

	printf("Running Random Game Test\n");

	players = rand() % 3 + 2;

	initializeGame(2, k, players, p);
  
  	while (!isGameOver(p)) {
  		
  		player = whoseTurn(p);
  		printf("Player %d's turn:\n", player + 1);
  		printHand(player, p);

  		playCards(player, p);
  		buyCards(player, p);
      		     
      	if(!isGameOver(p)){
      		endTurn(p);
      		turn++;
      	}
      	printf("\n");
	    
  	} // end of While

  	printf("Game is over\n");
  	int i;
  	for(i = 0; i < p->numPlayers; i++){
  		printf("Player %d Score: %d\n", i+1, scoreFor(i, p));
  	}

	printf("Tests Complete\n");

	return 0;
}

void makeKingdomCards(int k[10]){
	int i, x, selection;
	for(i = 0; i < 10; i++){
		selection = rand() % 20 + 7;
		for(x = 0; x < i; x++){
			if(selection == k[x]){
				continue;
			}
		}
		k[i] = selection;
	}
}

void playCards(int player, struct gameState *state){
	int handSize = state->handCount[player];
	int i, card;
	for(i = 0; i < handSize; i++){
		if(state->hand[player][i] > 6){
			card = state->hand[player][i];
			playCard(i, 1, 1, 1, state);
			printf("Player %d played %s\n", player+1, CARD_NAMES[card]);
		}
		if(handSize != state->handCount[player]){
			handSize = state->handCount[player];
			i = 0;
		}
	}
}

void buyCards(int player, struct gameState *state){
	int choice;
	while(state->numBuys > 0){
		choice = rand() % 26 + 1; //every card possible except curse
		if(state->supplyCount[choice] > 0 && state->coins >= CARD_COSTS[choice]){
			buyCard(choice, state);
			printf("Player %d bought %s\n", player+1, CARD_NAMES[choice]);
		}
	}

}

void printHand(int player, struct gameState *state){
	int i;
	printf("Player %d has:", player + 1);
	for(i = 0; i < state->handCount[player]; i++){
		printf(" %s", CARD_NAMES[state->hand[player][i]]);
	}
	printf("\n");
}