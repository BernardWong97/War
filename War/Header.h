// Constants
#define GAME_ROUND 13

// Global Variables
int gameRound;
char deck[13][3];
char suit[4][9];

// Structure
typedef struct {
	int playerNum;
	int numOfCard;
	int cardValue[13];
	int playerPoint;
	char cards[13][3];
	char cardsuit[13][9];
	char chosenCard[13];
}player;

// Function Prototypes
void generateDecks();
int displayStatus(player p[], int numOfPlayers);
char roundOption(char choice);
int exitApp(char choice);

