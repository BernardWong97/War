#include <stdio.h>

#include "Header.h"

// The main where the game runs
void main() {
	// Variables
	int numOfPlayers;
	player player[10];

	// Initialization
	gameRound = 0;

	// Prompt input how many players are playing
	printf("Please enter how many players are playing ( 2 - 10 ): ");
	scanf("%d", &numOfPlayers);

	// while loop validates number of players
	while (numOfPlayers < 2 || numOfPlayers > 10) {
		printf("Only 2 to 10 players are allowed, please try again.\n\n");
		printf("Please enter how many players are playing ( 2 - 10 ): ");
		scanf("%d", &numOfPlayers);
	} // while

	// for loop iterates through number of players
	for (int i = 0; i < numOfPlayers; i++) {
		generateDecks();
		distributeCards(player[i], i);
	} // for

	gameRound++;
	getch();
} // main