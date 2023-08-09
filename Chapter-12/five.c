#include <stdio.h>

#define WORDS 12
#define LETTERS 10 

int main(void) {
	char sentence[WORDS][LETTERS] = {'n'}, final, *p;

	printf("Enter a sentence: ");
	int finished = 0;
	for (int i = 0; i < WORDS; i++) {
		if (finished) break;

		for (p = sentence[i]; p < sentence[i] + LETTERS; p++) {
			scanf("%c", p);

			if (*p == '\n' || *p == '.' || *p == '?' || *p == '!') {
				final = *p;
				*p = ' ';
				finished = 1;
				break;
			}

			if (*p == ' ') {
				break;
			}

			if (finished) {
				break;
			}
		}
	}

	printf("Reversal of sentence: ");
	for (int i = WORDS - 1; i >= 0; i--) {
		for (p = sentence[i]; p < sentence[i] + LETTERS; p++) {
			if (i == 0 && *p == ' ') {
				*p = final;
			}

			if (*p != '\n') {
				printf("%c", *p);
			}
		}
	}

	printf("\n");

	return 0;
}
