#include <stdio.h>

int main(void) {
	int number, uni, dec, cen, reversed;

	printf("Enter a three-digit number: ");
	scanf("%d", &number);

	uni = number % 10;
	dec = (number / 10) % 10;
	cen = (number / 100);

	reversed = uni * 100 + dec * 10 + cen;

	printf("%d\n", reversed);

	return 0;
}
