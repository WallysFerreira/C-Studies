#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1;
#define FALSE 0;

typedef int bool;

int roll_dice(void);
bool play_game(void);

int main(void) {
	char keep_going = 'Y';
	int wins = 0, losses = 0;

	while (keep_going == 'Y') {
		int result = play_game();

		// Check for the result of the game
		if (result) {
			printf("You win!\n");
			wins++;
		} else {
			printf("You lose!\n");
			losses++;
		}
	
		// Check if user wants to keep playing
		printf("\nPlay again? ");
		scanf(" %c", &keep_going);
		keep_going = toupper(keep_going);
		printf("\n");
	}

	printf("Wins: %d	Losses: %d\n", wins, losses);

	return 0;
}

int roll_dice(void) {
	srand(clock());

	int roll1 = rand() % 6 + 1;
	int roll2 = rand() % 6 + 1;

	return roll1 + roll2;
}

bool play_game(void) {
	int roll = roll_dice(), round = 1, last = 0;

	printf("You rolled: %d\n", roll);

	while (1) {
		if (round == 1 && (roll == 7 || roll == 11)) {
			return TRUE;
		}

		last = roll;
		roll = roll_dice();
		printf("You rolled: %d\n", roll);
		round++;

		if (roll == 7) return FALSE;
		if (roll == last) return TRUE;
	}
}
