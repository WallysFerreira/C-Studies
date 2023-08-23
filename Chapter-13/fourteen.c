#include <stdio.h>
#include <ctype.h>

int letters_used[26] = {0};

int are_anagrams(const char *word1, const char *word2);

int main(void) {
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

	printf("The words %s anagrams.\n", are_anagrams(word1, word2) ? "are" : "are not");
	return 0;
}

int are_anagrams(const char *word1, const char *word2) {
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
			return 0;
		}
	}

	return 1;
}
