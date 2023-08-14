#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compute_scrabble_value(const char *word);

int main(void) {
	char *input;

	printf("Enter a word: ");

	scanf("%s", input); 

	printf("Scrabble value: %d\n", compute_scrabble_value(input));

	return 0;
}

int compute_scrabble_value(const char *word) {
	char c;
	int sum = 0;

	for (int i = 0; i < strlen(word); i++) {
		c = toupper(word[i]);

		switch (c) {
			case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
				sum += 1;
				break;
			case 'D': case 'G':
				sum += 2;
				break;
			case 'B': case 'C': case 'M': case 'P':
				sum += 3;
				break;
			case 'F': case 'H': case 'V': case 'W': case 'Y':
				sum += 4;
				break;
			case 'K':
				sum += 5;
				break;
			case 'J': case 'X':
				sum += 8;
				break;
			case 'Q': case 'Z':
				sum += 10;
				break;
		}
	}

	return sum;
}
