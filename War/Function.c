#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

void generateDecks() {
	// Deck array
	deck[0] = 'A';
	deck[1] = '2';
	deck[2] = '3';
	deck[3] = '4';
	deck[4] = '5';
	deck[5] = '6';
	deck[6] = '7';
	deck[7] = '8';
	deck[8] = '9';
	deck[9] = '10';
	deck[10] = 'J';
	deck[11] = 'Q';
	deck[12] = 'K';

	// Suit array
	strcpy(suit[0], "clubs");
	strcpy(suit[1], "diamonds");
	strcpy(suit[2], "hearts");
	strcpy(suit[3], "spades");
} // generateDecks()

void distributeCards(player p, int num) {
	// Data members
	int randNum;

	p.playerNum = num;

	// for loop populate player's cards
	for (int i = 0; i < GAME_ROUND; i++) {
		randNum = rand() % 4;

		// distribute 13 cards
		p.cards[i] = deck[i];

		// switch statement generate random suit for each card
		switch (randNum) {
			case 0:
				strcpy(p.cardsuit[i], suit[0]);
				break;
			case 1:
				strcpy(p.cardsuit[i], suit[1]);
				break;
			case 2:
				strcpy(p.cardsuit[i], suit[2]);
				break;
			case 3:
				strcpy(p.cardsuit[i], suit[3]);
				break;
		} // switch
	} // for
	
} // distributeCards()