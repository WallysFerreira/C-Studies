#include <stdio.h>

int main(void) {
	int n1, n2, remainder;

	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);

	while (n2 != 0) {
		remainder = n1 % n2;

		n1 = n2;
		n2 = remainder;
	}

	printf("Greatest common divisor: %d\n", n1);

	return 0;
}
