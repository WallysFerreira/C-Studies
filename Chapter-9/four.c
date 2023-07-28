#include <stdio.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0
#define LEN 15

typedef int bool;

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) {
	int word1_count[26] = {0}, word2_count[26] = {0};

	// Read word from input and count letters in it
	read_word(word1_count);
	read_word(word2_count);
	
	printf("The words %s anagrams.\n", equal_array(word1_count, word2_count) ? "are" : "are not");
	return 0;
}

void read_word(int counts[26]) {
	char word[LEN];

	// Read input
	printf("Enter word: ");
	for (int i = 0; i < LEN; i++) {
		scanf("%c", &word[i]);

		if (word[i] == '\n') {
			word[i] = '\0';
			break;
		}

		word[i] = toupper(word[i]);
	}

	// Count letters
	for (int i = 0; i < LEN; i++) {
		int index = word[i] - 65;

		if (index >= 0 && index < 26) {
			counts[index]++;
		}
	}
}

bool equal_array(int counts1[26], int counts2[26]) {
	for (int i = 0; i < 26; i++) {
		if (counts1[i] != counts2[i]) return FALSE;
	}

	return TRUE;
}
