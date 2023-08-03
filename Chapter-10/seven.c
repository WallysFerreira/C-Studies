#include <stdio.h>

#define MAX_DIGITS 3

int segments[10][7] = {
	{1, 1, 1, 1, 1, 1, 0},
	{0, 1, 1, 0, 0, 0, 0},
	{1, 1, 0, 1, 1, 0, 1},
	{1, 1, 1, 1, 0, 0, 1},
	{0, 1, 1, 0, 0, 1, 1},
	{1, 0, 1, 1, 0, 1, 1},
	{1, 0, 1, 1, 1, 1, 1},
	{1, 1, 1, 0, 0, 0, 0},
	{1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 0, 1, 1}
};
char digits[4][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void) {
	int n1 = 2;
	int k = 0;

	clear_digits_array();
	
	for (int i = 0; i <= MAX_DIGITS * 4; i += 4) {
		process_digit(n1, i);
	}

	print_digits_array();
	

	return 0;
}

void clear_digits_array(void) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < MAX_DIGITS * 4; j++) {
			digits[i][j] = ' ';
		}
	}
}

void process_digit(int digit, int position) {
	int row;
	for (int i = 0; i < 7; i++) {
		if (segments[digit][i]) {
			/* HARD CODED
			switch (i) {
				case 0:
					digits[0][1] = '_';
					break;
				case 1:
					digits[1][2] = '|';
					break;
				case 2:
					digits[2][2] = '|';
					break;
				case 3:
					digits[2][1] = '_';
					break;
				case 4:
					digits[2][0] = '|';
					break;
				case 5:
					digits[1][0] = '|';
					break;
				case 6:
					digits[1][1] = '_';
					break;
			}
			*/

			switch (i) {
				case 0:
					digits[0][1] = '_';
					break;
				case 1: case 2:
					digits[i][2] = '|';
					break;
				case 3: case 6:
					digits[6 / i][1] = '_';
					break;
				case 4: case 5:
					digits[6 - i][0] = '|';
					break;
			}
		}
	}
}

void print_digits_array(void) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < MAX_DIGITS * 4; j++) {
			printf("%c", digits[i][j]);
		}

		printf("\n");
	}
}
