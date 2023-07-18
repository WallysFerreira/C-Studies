#include <stdio.h>

int main(void) {
	int input, number, digit, digit_check[10] = {0};


	do {
		printf("Enter a number: ");
		scanf("%d", &input);

		number = input;

		while (number > 0) {
			digit = number % 10;

			if (digit_check[digit] != 0) {
				break;
			}

			digit_check[digit] = 1;

			number /= 10;
		}

		if (number > 0) {
			printf("Repeated number\n");
		} else {
			printf("No repeated numbers\n");
		}
	} while (input > 0);

	return 0;
}
