#include <ctype.h>
#include <stdio.h>

int main(void) {
	char message[26], output[26];

	printf("Enter message: ");
	for (int i = 0; i < 26; i++) {
		scanf("%c", &message[i]);
	}
	printf("\n");

	for (int i = 0; i < 26; i++) {
		message[i] = toupper(message[i]);
		switch (message[i]) {
			case ('A'):
				message[i] = '4';
				break;
			case ('B'):
				message[i] = '8';
				break;
			case ('E'):
				message[i] = '3';
				break;
			case ('I'):
				message[i] = '1';
				break;
			case ('O'):
				message[i] = '0';
				break;
			case ('S'):
				message[i] = '5';
				break;
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%c", message[i]);
	}

	return 0;
}
