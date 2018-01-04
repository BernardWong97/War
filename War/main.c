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
		
		player[i].playerNum = i + 1;

		// for loop distribute cards to each player
		for (int j = 0; j < 13; j++) {
			strcpy(player[i].cards[j], deck[j]);

			// switch statement generate random suit for each card
			int randNum = rand() % 4;

			switch (randNum) {
			case 0:
				strcpy(player[i].cardsuit[j], suit[0]);
				break;
			case 1:
				strcpy(player[i].cardsuit[j], suit[1]);
				break;
			case 2:
				strcpy(player[i].cardsuit[j], suit[2]);
				break;
			case 3:
				strcpy(player[i].cardsuit[j], suit[3]);
				break;
			} // switch
		} // for
		

		printf("\nPlayer %d's card is: \n", player[i].playerNum);

		for (int j = 0; j < GAME_ROUND; j++) {
			printf("|%s %s| ", player[i].cards[j], player[i].cardsuit[j]);
		} // for
	} // for

	gameRound++;
	getch();
} // main