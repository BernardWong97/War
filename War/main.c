#include <stdio.h>

#include "Header.h"

// The main where the game runs
void main() {
	// Variables
	int numOfPlayers, chooseCorrect, playedCardValue[10], highestCard, highestPlayer;
	char chooseCard[3], chosenCard[13];
	player player[10];

	// Initialization
	gameRound = 1;
	highestCard = 0;

	// New Game - Prompt input how many players are playing
	printf("=====NEW GAME=====\n");
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
		// Clear console and generate deck
		system("@cls||clear");
		generateDecks();
		
		player[i].playerNum = i + 1;

		// for loop distribute cards to each player
		for (int j = 0; j < 13; j++) {
			player[i].numOfCard = 13;
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
		
		// Output Round number
		printf("====Round %d====\n", gameRound);

		// Output Player number
		printf("\nPlayer %d:\n--Your cards--\n", player[i].playerNum);

		// for loop output cards on hand
		for (int j = 0; j < player[i].numOfCard; j++) {
			printf("|%-2s  %-8s|\n", player[i].cards[j], player[i].cardsuit[j]);
		} // for

		// Prompt player choose what card to play
		printf("\nPlease enter the rank of the card that you want to play ( 2 - A ): ");
		scanf("%s", chooseCard);

		// while loop validates card chosen
		chooseCorrect = 0;
		while (chooseCorrect == 0) {
			// foor loop iterates through cards
			for (int j = 0; j < player[i].numOfCard; j++) {
				// if statement determine if the card is available
				if (strcmp(player[i].cards[j], chooseCard) == 0) {
					chooseCorrect = 1;

					// save chosen card and play card
					strcpy(chosenCard, player[i].cards[j]);
					strcat(chosenCard, " ");
					strcat(chosenCard, player[i].cardsuit[j]);
					playedCardValue[i] = cardValue[j];
					strcpy(player[i].chosenCard, chosenCard);

					player[i].numOfCard--;
					// for loop delete the card from hand
					for (int k = j; k < player[i].numOfCard; k++) {
						strcpy(player[i].cards[k], player[i].cards[k + 1]);
						strcpy(player[i].cardsuit[k], player[i].cardsuit[k + 1]);
					} // for
				} // if
			} // for

			// if the card is not exist, prompt choose another card
			if (chooseCorrect == 0) {
				printf("Sorry, that card does not exist in your hand, please try again.\n");
				printf("\nPlease enter the rank of the card that you want to play ( 2 - A ): ");
				scanf("%s", chooseCard);
			} // if
		} // while

		// Let player know what card had played
		printf("You have chosen %s.\nPress any key to continue.", chosenCard);
		getch();
	} // for

	// Output the War
	system("@cls||clear");
	printf("====Round %d====\n", gameRound);
	printf("The players had played:\n");
	
	// for loop iterates player plays
	for (int i = 0; i < numOfPlayers; i++) {
		printf("Player %d played - %s\n", player[i].playerNum, player[i].chosenCard);
	} // for

	// Determine the winner of the war
	for (int i = 0; i < 10; i++) {
		if (highestCard < playedCardValue[i]) {
			highestCard = playedCardValue[i];
			highestPlayer = i;
		} // if
	} // for

	// Output result
	printf("\nThe winner of this war is: Player %d with %s\n", player[highestPlayer].playerNum, player[highestPlayer].chosenCard);

	gameRound++;
	getch();
} // main