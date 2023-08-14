#include <ctype.h>
#include <string.h>
#include <stdio.h>

int compute_vowel_count(const char *sentence);

int main(void) {
	char *input;
	int sum = 0;

	printf("Enter a sentence: ");
	fgets(input, 30, stdin);

	printf("Your sentence contains %d vowels\n", compute_vowel_count(input));

	return 0;
}

int compute_vowel_count(const char *sentence) {
	int sum = 0;

	for (int i = 0; i < strlen(sentence); i++) {
		char c = sentence[i];
		c = toupper(c);

		switch (c) {
			case 'A': case 'E': case 'I': case 'O': case 'U':
				sum++;
		}
	}

	return sum;
}
