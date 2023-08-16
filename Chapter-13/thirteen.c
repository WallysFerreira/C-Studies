#include <stdio.h>
#include <string.h>

#define LENGTH 30

void encrypt(char *message, int shift);

int main(void) {
	int shift, option;
	char c, message[LENGTH] = {'\0'};

	// Get user inputs
	printf("Enter message: ");
	for (int i = 0; (c = getchar()) != '\n' && i < LENGTH; i++) {
		message[i] = c;
	}
	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);
	printf("1 - Encrypt\n2 - Decrypt\nWhat do you want to do? ");
	scanf("%d", &option);

	if (option - 1) {
		shift = 26 - shift;
	}

	encrypt(message, shift);
	printf("%s\n", message);

	return 0;
}

void encrypt(char *message, int shift) {
	while (*message) {
		if (*message >= 65 && *message <= 90) {
			*message = (*message - 'A' + shift) % 26 + 'A';
		} else if (*message >= 97 && *message <= 122) {
			*message = (*message - 'a' + shift) % 26 + 'a';
		}

		message++;
	}
}
