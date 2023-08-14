#include <stdio.h>
#include <string.h>

#define LEN 20

int main(void) {
	char string[LEN + 1], first[LEN + 1] = "zzzzzzzz", last[LEN + 1] = "aaaaaaaaa";

	while (1) {
		printf("Enter word: ");
		scanf("%s", string);

		if (strcmp(string, first) < 0) {
			strcpy(first, string);
		} else if (strcmp(string, last) > 0) {
			strcpy(last, string);
		}

		if (strlen(string) == 4) {
			break;
		}
	}

	printf("\nFirst word: %s\nLast word: %s\n", first, last);
	
	return 0;
}
