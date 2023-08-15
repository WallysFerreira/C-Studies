#include <stdio.h>

int main(void) {
	int word_count = 1, char_count = 0;
	float avg;
	char c;

	while ((c = getchar()) != '\n') {
		if (c != ' ') {
			char_count++;
		} else {
			word_count++;
		}
	}

	avg = (float) char_count / word_count;

	printf("Sentence length: %d\nWords in sentence: %d\nAverage word length: %.1f\n", char_count, word_count, avg);

	return 0;
}
