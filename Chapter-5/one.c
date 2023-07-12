#include <stdio.h>

int main(void) {
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number >= 0 && number <= 9) {
		printf("%d has %d digits\n", number, 1);
	} else if (number >= 10 && number <= 99) {
		printf("%d has %d digits\n", number, 2);
	} else if (number >= 100 && number <= 999) {
		printf("%d has %d digits\n", number, 3);
	} else if (number >= 1000 && number <= 9999) {
		printf("%d has %d digits\n", number, 4);
	} else {
		printf("There are too many digits\n");
	}

	return 0;
}
