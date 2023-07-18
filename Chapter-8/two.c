#include <stdio.h>

int main(void) {
	int number, digit, digit_check[10] = {0};

	printf("Enter a number: ");
	scanf("%d", &number);

	while (number > 0) {
		digit = number % 10;

		digit_check[digit] += 1;

		number /= 10;
	}

	printf("Digit:	     ");
	for (int i = 0; i < 10; i++) {
		printf(" %d ", i);
	}
	printf("\n");

	printf("Occurrences: ");
	for (int i = 0; i < 10; i++) {
		printf(" %d ", digit_check[i]);
	}
	printf("\n");

	return 0;
}
