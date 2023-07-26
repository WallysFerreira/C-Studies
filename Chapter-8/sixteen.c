#include <stdio.h>
#include <ctype.h>

int main(void) {
	int letters_used[26] = {0}, different = 0;
	char word1[15], word2[15];

	// Get inputs
	printf("Enter the first word: ");
	for (int i = 0; i < 15; i++) {
		scanf("%c", &word1[i]);

		if (word1[i] == '\n') {
			word1[i] = '\0';
			break;
		}

		word1[i] = toupper(word1[i]);
	}
	printf("Enter the second word: ");
	for (int i = 0; i < 15; i++) {
		scanf("%c", &word2[i]);

		if (word2[i] == '\n') {
			word2[i] = '\0';
			break;
		}

		word2[i] = toupper(word2[i]);
	}

	// Count letters
	for (int i = 0; i < 15; i++) {
		int index = word1[i] - 65;

		if (index >= 0 && index < 26) {
			letters_used[index]++;
		}
	}
	for (int i = 0; i < 15; i++) {
		int index = word2[i] - 65;

		if (index >= 0 && index < 26) {
			letters_used[index]--;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (letters_used[i] != 0) {
			different = 1;
		}
	}

	printf("The words %s anagrams.\n", different ? "are not" : "are");
	return 0;
}
