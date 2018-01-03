#include <stdio.h>
#include "Header.h"

// The main where the game runs
void main() {
	// Variables
	int numOfPlayers;

	// Initialization
	gameRound = 0;

	// Prompt input how many players are playing
	printf("Please enter how many players are playing ( 2 - 10 ): ");
	scanf("%d", &numOfPlayers);

	while (numOfPlayers < 2 || numOfPlayers > 10) {
		printf("Only 2 to 10 players are allowed, please try again.\n\n");
		printf("Please enter how many players are playing ( 2 - 10 ): ");
		scanf("%d", &numOfPlayers);
	} // while loop validate number of players

	gameRound++;
	getch();
} // main