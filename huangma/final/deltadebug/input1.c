#include "dominion.h"
#include <stdio.h>
#include "rngs.h"
#include <stdlib.h>
#include <math.h>
#include <assert.h>
int main(){ struct gameState *G;
int numplayers, money, handpos, rseed, rcard, choice1, choice2, choice3, coinflip, i, numtests,r;
int k[18]={adventurer, gardens, embargo, village, minion, mine, cutpurse,sea_hag, tribute, smithy, feast, ambassador, steward, great_hall, baron, outpost, salvager, treasure_map};
int players[4];
G=newGame();
rseed=1;
numplayers=3;
initializeGame(numplayers,k,rseed,G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=0;choice2=0;
choice3=0;
money=4;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=1;choice2=0;
choice3=1;
money=3;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=1;choice2=0;
choice3=0;
money=3;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=1;choice2=0;
choice3=0;
money=3;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=1;choice2=0;
choice3=0;
money=4;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=1;choice2=0;
choice3=0;
money=4;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=0;choice2=0;
choice3=1;
money=3;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=25;
handpos=0;
choice1=0;choice2=0;
choice3=0;
cardEffect(rcard, 3, choice2,choice3,G,0);
money=2;
rcard=feast;
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=1;choice2=0;
choice3=0;
money=3;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=1;choice2=0;
choice3=1;
money=4;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=1;choice2=0;
choice3=1;
money=4;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=0;choice2=0;
choice3=1;
money=4;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=22;
handpos=0;
choice1=0;choice2=0;
choice3=0;
cardEffect(rcard, 3, choice2,choice3,G,0);
money=2;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=1;choice2=0;
choice3=1;
money=4;
rcard=feast;
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=0;choice2=0;
choice3=0;
money=4;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=1;choice2=0;
choice3=1;
money=3;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=9;
handpos=0;
choice1=0;choice2=0;
choice3=1;
cardEffect(rcard, 3, choice2,choice3,G,0);
money=2;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=0;choice2=0;
choice3=1;
money=3;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=22;
handpos=1;
choice1=0;choice2=0;
choice3=0;
cardEffect(rcard, 3, choice2,choice3,G,0);
money=3;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=25;
handpos=0;
choice1=0;choice2=0;
choice3=1;
cardEffect(rcard, 3, choice2,choice3,G,0);
money=2;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=1;choice2=0;
choice3=0;
money=3;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=0;choice2=0;
choice3=0;
money=3;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=9;
handpos=1;
choice1=1;choice2=0;
choice3=1;
cardEffect(rcard, 3, choice2,choice3,G,0);
money=2;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=1;choice2=0;
choice3=0;
money=4;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=0;choice2=0;
choice3=0;
money=2;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=0;choice2=0;
choice3=1;
money=4;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=1;choice2=0;
choice3=1;
money=3;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=22;
handpos=0;
choice1=0;choice2=0;
choice3=0;
cardEffect(rcard, 3, choice2,choice3,G,0);
money=3;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=25;
handpos=0;
choice1=0;choice2=0;
choice3=1;
cardEffect(rcard, 3, choice2,choice3,G,0);
money=2;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=-1;
handpos=-1;
choice1=0;choice2=0;
choice3=1;
money=5;
rcard=feast;
r=buyCard(rcard,G);
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=14;
handpos=0;
choice1=1;choice2=0;
choice3=0;
cardEffect(rcard, 3, choice2,choice3,G,0);
money=4;
rcard=feast;
endTurn(G);
isGameOver(G);
handpos=-1;
coinflip=rand()%10;
rcard=9;
handpos=0;
choice1=1;choice2=0;
choice3=0;
cardEffect(rcard, 3, choice2,choice3,G,0);
return 0;
}
