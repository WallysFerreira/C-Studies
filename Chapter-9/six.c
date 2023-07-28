#include <stdio.h>
#include <math.h>

int solve_polynomial(int x);

int main(void) {
	int x;

	printf("Enter the value for x: ");
	scanf("%d", &x);
	
	printf("The result is %d\n", solve_polynomial(x));

	return 0;
}

int solve_polynomial(int x) {
	return (3 * pow(x, 5)) + (2 * pow(x, 4)) - (5 * pow(x, 3)) - (x * x) + (7 * x) - 6;
}
