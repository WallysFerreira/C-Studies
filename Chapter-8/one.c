#include <stdio.h>

int main(void) {
	int digit, number, digit_check[10] = {0};

	printf("Enter a number: ");
	scanf("%d", &number);

	printf("Repeated digits: ");
	while (number > 0) {
		digit = number % 10;
		
		if (digit_check[digit] == 1) {
			printf("%d ", digit);
		} else {
			digit_check[digit] = 1;
		}

		number /= 10;
	}

	printf("\n");

	return 0;
}
