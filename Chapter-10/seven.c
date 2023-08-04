#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 10

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
char digits[3][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void) {
	int n;

	clear_digits_array();

	printf("Enter a number: ");

	for (int i = 0; i < MAX_DIGITS * 4; i += 4) {
		char c;
		int got = 0;

		while (!got) {
			c = getchar();

			if (c >= 48 && c <= 57) {
				got = 1;
				n = c - '0';
			} else if (c == '\n') {
				print_digits_array();
				return 0;
			}
		}

		process_digit(n, i);
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
	for (int i = 0; i < 7; i++) {
		if (segments[digit][i]) {
			switch (i) {
				case 0:
					digits[0][position + 1] = '_';
					break;
				case 1: case 2:
					digits[i][position + 2] = '|';
					break;
				case 3: case 6:
					digits[6 / i][position + 1] = '_';
					break;
				case 4: case 5:
					digits[6 - i][position] = '|';
					break;
			}
		}
	}
}

void print_digits_array(void) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < MAX_DIGITS * 4; j++) {
			printf("%c", digits[i][j]);
		}

		printf("\n");
	}
}
