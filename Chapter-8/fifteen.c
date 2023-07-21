#include <stdio.h>

#define LENGTH 30

int main(void) {
	int shift, option;
	char message[LENGTH] = {'\0'};

	// Get user inputs
	printf("Enter message: ");
	for (int i = 0; i < LENGTH; i++) {
		scanf("%c", &message[i]);

		if (message[i] == '\n') {
			break;
		}
	}
	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);
	printf("1 - Encrypt\n2 - Decrypt\nWhat do you want to do? ");
	scanf("%d", &option);

	if (option - 1) {
		shift = 26 - shift;
	}

	for (int i = 0; i < LENGTH; i++) {
		char c;

		if (message[i] >= 65 && message[i] <= 90) {
			c = (message[i] - 'A' + shift) % 26 + 'A';
			printf("%c", c);
		} else if (message[i] >= 97 && message[i] <= 122) {
			c = (message[i] - 'a' + shift) % 26 + 'a';
			printf("%c", c);
		} else {
			c = message[i];
			printf("%c", c);
		}
	}

	return 0;
}
