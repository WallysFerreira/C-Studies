#include <stdio.h>

#define N 10

int main(void) {
	char ch, string[N];
	char *p;

	printf("Enter a message: ");

	for (p = &string[0]; p < &string[N]; p++) {
		ch = getchar();

		if (ch == '\n') break;

		*p = ch;
	}

	for (int i = 0; i < N; i++) {
		printf("%c", string[i]);
	}
	printf("\n");

	return 0;
}
