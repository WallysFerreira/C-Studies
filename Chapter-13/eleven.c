#include <stdio.h>
#include <string.h>
#include <ctype.h>

double compute_average_word_length(const char *sentence);

int main(void) {
	float avg;
	char *input;

	fgets(input, 30, stdin);

	avg = compute_average_word_length(input);

	printf("Average word length: %.1f\n", avg);

	return 0;
}

double compute_average_word_length(const char *sentence) {
	float count = 1, sum = 0;

	for (int i = 0; i < strlen(sentence); i++) {
		if (sentence[i] == ' ') {
			count++;
		} else if (isalpha(sentence[i])) {
			sum++;
		}
	}

	return sum / count;
}
