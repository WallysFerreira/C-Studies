#include <stdio.h>

#define NUMBER_LENGTH 14

int main(void) {
	char number[NUMBER_LENGTH];

	printf("Enter phone number: ");

	// Get user input
	scanf("%c", &number[0]);
	for (int i = 1; i < NUMBER_LENGTH; i++) {
		if (number[i - 1] != '\n') {
			scanf("%c", &number[i]);
		} else { break; }
	}

	printf("In numeric form: ");
	for (int i = 0; i < NUMBER_LENGTH; i++) {
		char c = number[i];
		if (c == '\n') { break; }

		switch (c) {
			case 'A': case 'B': case 'C':
				printf("2");
				break;
			case 'D': case 'E': case 'F':
				printf("3");
				break;
			case 'G': case 'H': case 'I':
				printf("4");
				break;
			case 'J': case 'K': case 'L':
				printf("5");
				break;
			case 'M': case 'N': case 'O':
				printf("6");
				break;
			case 'P': case 'R': case 'S':
				printf("7");
				break;
			case 'T': case 'U': case 'V':
				printf("8");
				break;
			case 'W': case 'X': case 'Y':
				printf("9");
				break;
			default:
				printf("%c", c);
		}
	}
	
	printf("\n");

	return 0;
}
