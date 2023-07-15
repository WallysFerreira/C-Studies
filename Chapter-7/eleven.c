#include <ctype.h>
#include <stdio.h>

int main(void) {
	char first_letter, c;

	printf("Enter a first and last name: ");

	if ((first_letter = getchar()) != ' ') {
		first_letter = getchar();
	}

	
	do {
		c = getchar();
	} while (c != ' ');
	


	while ((c = getchar()) != '\n') {
		if (c != ' ') {
			printf("%c", c);
		}
	}


	printf(", %c.\n", toupper(first_letter));

	return 0;
}
