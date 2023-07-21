#include <stdio.h>

#define WORDS 12
#define LETTERS 10

int main(void) {
	char sentence[WORDS][LETTERS] = {'n'}, final;

	printf("Enter a sentence: ");
	int finished = 0;
	for (int i = 0; i < WORDS; i++) {
		for (int j = 0; j < LETTERS; j++) {
			scanf("%c", &sentence[i][j]);

			if (sentence[i][j] == '\n' || sentence[i][j] == '.' || sentence[i][j] == '?' || sentence[i][j] == '!') {
				final = sentence[i][j];
				sentence[i][j] = ' ';
				finished = 1;
				break;
			}

			if (sentence[i][j] == ' ') {
				break;
			}
		}

		if (finished) {
			break;
		}
	}

	printf("Reversal of sentence: ");
	for (int i = WORDS - 1; i >= 0; i--) {
		for (int j = 0; j < LETTERS; j++) {
			//printf("%d %d\n", i, j);
			if (i == 0 && sentence[i][j] == ' ') {
				sentence[i][j] = final;
			}

			if (sentence[i][j] != '\n') {
				printf("%c", sentence[i][j]);
			}
		}
	}

	printf("\n");

	return 0;
}
