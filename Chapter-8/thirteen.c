#include <stdio.h>

#define LENGTH ((int) (sizeof(last_name) / sizeof(last_name[0])))

int main(void) {
	char last_name[20], first_letter, placeholder;
	int space_happened;

	printf("Enter a first and last name: ");
	first_letter = getchar();
	
	do {
		scanf("%c", &placeholder);
	} while (placeholder != ' ');

	for (int i = 0; i < 20; i++) {
		scanf("%c", &last_name[i]);

		if (last_name[i] == '\n') {
			last_name[i] = ',';
			last_name[i + 1] = ' ';
			break;
		}
	}

	printf("You entered the name: ");
	for (int i = 0; i < LENGTH; i++) {
		if (last_name[i] == ' ') {
			break;
		}
		printf("%c", last_name[i]);
	}
	printf(" %c\n", first_letter);

	return 0;
}
