#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DOWN	0
#define LEFT	1
#define UP		2
#define RIGHT 3

int main(void) {
	char table[10][10], letters[26], current_x = 0, current_y = 0;
	srand(time(0));
	int next_move = rand() % 4;

	// Populate letters array
	for (int i = 0; i < 26; i++) {
		letters[i] = i + 17 + '0';
	}

	// Initialize table
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			table[i][j] = '.';
		}
	}

	// Populate table depending on next_move
	for (int i = 0; i < 26; ) {
		table[current_x][current_y] = letters[i];

		// If there are no possible moves, end loop
		if (table[current_x + 1][current_y] != '.' && table[current_x - 1][current_y] != '.' && table[current_x][current_y + 1] != '.' && table[current_x][current_y - 1] != '.') {
			i = 26;
		}

		switch(next_move) {
			case (0):
				if (current_y + 1 < 10) {
					if (table[current_x][current_y + 1] == '.') {
						current_y += 1;
						i++;
					} else {
						break;
					}
				}
				break;
			case (1):
				if (current_x  - 1 >= 0) {
					if (table[current_x - 1][current_y] == '.') {
						current_x -= 1;
						i++;
					} else {
						break;
					}
				}
				break;
			case (2):
				if (current_y - 1 >= 0) {
					if (table[current_x][current_y - 1] == '.') {
						current_y -= 1;
						i++;
					} else {
						break;
					}
				}
				break;
			case (3):
				if (current_x + 1 < 10) {
					if (table[current_x + 1][current_y] == '.') {
						current_x += 1;
						i++;
					} else {
						break;
					}
				}
				break;
		}

		next_move = rand() % 4;
	}

	// Print table
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%c ", table[i][j]);
		}
		printf("\n");
	}

	return 0;
}
