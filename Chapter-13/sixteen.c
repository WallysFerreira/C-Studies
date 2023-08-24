#include <stdio.h>
#include <string.h>

#define N 20

void reverse(char *message);

int main(void) {
	char *string;

	printf("Enter a message: ");
	fgets(string, N, stdin);

	reverse(string);
	
	printf("Reversal is: %s\n", string);

	return 0;
}

void reverse(char *message) {
	char *c1, *c2;

	for (int i = 0; i < strlen(message) / 2; i++) {
		c1 = &message[i];
		c2 = &message[strlen(message) - 2 - i];
		char plc = *c1;
		*c1 = *c2;
		*c2 = plc;
	}
}
