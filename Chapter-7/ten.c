#include <ctype.h>
#include <stdio.h>

int main(void) {
	char c;
	int sum = 0;

	printf("Enter a sentence: ");

	while ((c = getchar()) != '\n') {
		c = toupper(c);

		switch (c) {
			case 'A': case 'E': case 'I': case 'O': case 'U':
			sum++;
		}
	}

	printf("Your sentence contains %d vowels\n", sum);

	return 0;
}
