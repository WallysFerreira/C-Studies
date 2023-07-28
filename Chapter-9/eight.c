#include <stdio.h>

#define TRUE 1;
#define FALSE 0;

typedef int bool;

int roll_dice(void);
bool play_game(void);

int main(void) {
	bool keep_going = TRUE;
	int wins = 0, losses = 0;

	while (keep_going) {
		int result = play_game();

		// Check for the result of the game
		if (result) {
			printf("You win!\n");
			wins++;
		} else {
			printf("You lose!\n");
			losses++;
		}
	}

	printf("Wins: %d	Losses: %d\n", wins, losses);

	return 0;
}
