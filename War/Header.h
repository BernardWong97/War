// Constants
#define GAME_ROUND 13

// Global Variables
int gameRound;
char deck[13];
char suit[4][9];


// Function Prototypes
void generateDecks();
void distributeCards(player p, int num);

// Structure
typedef struct {
	int playerNum;
	char cards[13];
	char cardsuit[13][9];
}player;