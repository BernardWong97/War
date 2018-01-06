#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

void generateDecks() {
	// Deck array
	strcpy(deck[0], "2");
	strcpy(deck[1], "3");
	strcpy(deck[2], "4");
	strcpy(deck[3], "5");
	strcpy(deck[4], "6");
	strcpy(deck[5], "7");
	strcpy(deck[6], "8");
	strcpy(deck[7], "9");
	strcpy(deck[8], "10");
	strcpy(deck[9], "J");
	strcpy(deck[10], "Q");
	strcpy(deck[11], "K");
	strcpy(deck[12], "A");

	// Suit array
	strcpy(suit[0], "Clubs");
	strcpy(suit[1], "Diamonds");
	strcpy(suit[2], "Hearts");
	strcpy(suit[3], "Spades");
} // generateDecks()

int displayStatus(player p[], int numOfPlayers) {
	char choice;
	int loopTrue = 0;

	// display the game status
	printf("\nGame Status:\n");
	for (int i = 0; i < numOfPlayers; i++) {
		printf("Player %d has %d points.\n", p[i].playerNum, p[i].playerPoint);
	} // for

	// prompt player input another option
	printf("\nPlease enter a character option (c/Complete round, x/Exit game): ");
	scanf(" %c", &choice);

	if (choice == 'x') {
		loopTrue = 1;
		return 1;
	} else if (choice == 'c') {
		loopTrue = 1;
	} // if..else

	while (loopTrue == 0) {
		printf("Sorry, only character 'c'/'x' are allowed to enter, please try again.\n");
		printf("Please enter a character option (c/Complete round, x/Exit game): ");
		scanf(" %c", &choice);

		if (choice == 'x') {
			loopTrue = 1;
			return 1;
		}
		else if (choice == 'c') {
			loopTrue = 1;
		} // if..else
	} // while

	return 0;
} // displayStatus()

char roundOption(char choice) {
	int loopTrue = 0;
	printf("Please enter a character option (c/Complete round, o/Output status, x/Exit game): ");
	scanf(" %c", &choice);

	if (choice == 'o') {
		loopTrue = 1;
	}else if (choice == 'x') {
		loopTrue = 1;
	}else if (choice == 'c') {
		loopTrue = 1;
	} // if..else

	while (loopTrue == 0) {
		printf("Sorry, only character 'c'/'o'/'x' are allowed to enter, please try again.\n");
		printf("Please enter a character option (c/Complete round, o/Output status, x/Exit game): ");
		scanf(" %c", &choice);

		if (choice == 'o') {
			loopTrue = 1;
		}
		else if (choice == 'x') {
			loopTrue = 1;
		}
		else if (choice == 'c') {
			loopTrue = 1;
		} // if..else
	} // while

	return choice;
} // roundOption