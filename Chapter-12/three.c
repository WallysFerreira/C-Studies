#include <stdio.h>

#define N 20

int main(void) {
	char ch, string[N], reverse[N];
	char *p, *p2;

	printf("Enter a message: ");

	for (p = string; p < string + N; p++) {
		ch = getchar();

		if (ch == '\n') break;

		*p = ch;
	}

	p2 = reverse;
	for (p = string + N; p >= string; p--) {
		if (*p == '\0') continue;

		*p2 = *p;
		p2++;
	}

	printf("Reversal is: %s\n", reverse);

	return 0;
}
