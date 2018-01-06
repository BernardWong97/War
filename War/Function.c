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