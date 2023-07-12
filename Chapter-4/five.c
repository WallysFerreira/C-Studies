#include <stdio.h>

int main(void) {
	int a1, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5;
	int first_sum, second_sum, remainder;

	printf("Enter barcode: ");
	scanf("%1d %1d%1d%1d%1d%1d %1d%1d%1d%1d%1d", &a1, &b1, &b2, &b3, &b4, &b5, &c1, &c2, &c3, &c4, &c5);

	first_sum = a1 + b2 + b4 + c1 + c3 + c5;
	second_sum = b1 + b3 + b5 + c2 + c4;

	first_sum *= 3;
	first_sum += second_sum - 1;

	remainder = first_sum % 10;
	remainder = 9 - remainder;

	printf("Digit: %d\n", remainder);

	return 0;
}
