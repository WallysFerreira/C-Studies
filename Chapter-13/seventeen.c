#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define N 20

int is_palindrome(const char *message);

int main(void) {
	char *string;

	printf("Enter a message: ");
	fgets(string, N, stdin);

	printf("The message %s a palindrome\n", is_palindrome(string) ? "is" : "is not");
	return 0;
}

int is_palindrome(const char *message) {
	char c1, c2;

	for (int i = 0; i < strlen(message) / 2; i++) {
		c1 = message[i];
		c2 = message[strlen(message) - 2 - i];

		if (c1 == ' ' || c2 == ' ') continue;

		if (c1 != c2) return 0;
	}

	return 1;
}
