#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DOWN	0
#define LEFT	1
#define UP		2
#define RIGHT 3

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void) {
	char table[10][10];
	srand(time(0));
	
	generate_random_walk(table);
	print_array(table);

	return 0;
}

void generate_random_walk(char walk[10][10]) {
	char current_x = 0, current_y = 0, letters[26];
	int next_move = rand() % 4;

	// Populate letters array
	for (int i = 0; i < 26; i++) {
		letters[i] = i + 17 + '0';
	}
	// Initialize table
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			walk[i][j] = '.';
		}
	}

	// Populate table depending on next_move
	for (int i = 0; i < 26; ) {
		walk[current_x][current_y] = letters[i];

		// If there are no possible moves, end loop
		if (walk[current_x + 1][current_y] != '.' && walk[current_x - 1][current_y] != '.' && walk[current_x][current_y + 1] != '.' && walk[current_x][current_y - 1] != '.') {
			i = 26;
		}

		switch(next_move) {
			case (0):
				if (current_y + 1 < 10) {
					if (walk[current_x][current_y + 1] == '.') {
						current_y += 1;
						i++;
					} else {
						break;
					}
				}
				break;
			case (1):
				if (current_x  - 1 >= 0) {
					if (walk[current_x - 1][current_y] == '.') {
						current_x -= 1;
						i++;
					} else {
						break;
					}
				}
				break;
			case (2):
				if (current_y - 1 >= 0) {
					if (walk[current_x][current_y - 1] == '.') {
						current_y -= 1;
						i++;
					} else {
						break;
					}
				}
				break;
			case (3):
				if (current_x + 1 < 10) {
					if (walk[current_x + 1][current_y] == '.') {
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
} 

void print_array(char walk[10][10]) {
	// Print table
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%c ", walk[i][j]);
		}
		printf("\n");
	}
}
