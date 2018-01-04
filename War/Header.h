// Constants
#define GAME_ROUND 13

// Global Variables
int gameRound;
char deck[13][3];
char suit[4][9];

// Structure
typedef struct {
	int playerNum;
	char cards[13][3];
	char cardsuit[13][9];
}player;

// Function Prototypes
void generateDecks();

