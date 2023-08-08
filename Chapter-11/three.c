#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void) {
	int n1, n2, m, n;

	printf("Enter a fraction: ");
	scanf("%d/%d", &n1, &n2);
	
	reduce(n1, n2, &m, &n);

	printf("Simplified fraction: %d/%d\n", n1 / m, n2 / m);

	return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator) {
	int remainder;
	*reduced_numerator = numerator;
	*reduced_denominator = denominator;

	while (*reduced_denominator != 0) {
		remainder = *reduced_numerator % *reduced_denominator;

		*reduced_numerator = *reduced_denominator;
		*reduced_denominator = remainder;
	}
}
