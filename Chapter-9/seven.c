#include <stdio.h>

int power(int x, int n);

int main(void) {
	int x, n;

	printf("Enter the number: ");
	scanf("%d", &x);
	printf("Enter the power: ");
	scanf("%d", &n);

	printf("%d^%d = %d\n", x, n, power(x, n));

	return 0;
}

int power(int x, int n) {
	int result;

	if (n == 0) return 1;

	// If n is odd x^n = x * x ^ n - 1. If even, x^n = (x ^ n / 2)^2
	if (n % 2 != 0) {
		result = x * power(x, n - 1);
		return result;
	} else {
		result = power(x, n / 2);
		return result * result;
	}

}
