#include <stdio.h>

int main(void) {
	int number, uni, dec, reversed;

	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	uni = number % 10;
	dec = (number / 10) % 10;

	reversed = uni * 10 + dec;

	printf("%d\n", reversed);

	return 0;
}
