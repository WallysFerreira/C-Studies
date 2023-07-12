#include <math.h>
#include <stdio.h>

int main(void) {
	int number, remainder;

	printf("Enter a number: ");
	scanf("%d", &number);

	do {
		remainder = number % 10;
		number /= 10;
		
		printf("%d", remainder);
	} while (number != 0);

	printf("\n");

	return 0;
}
