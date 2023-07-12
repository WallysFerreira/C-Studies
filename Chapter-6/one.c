#include <stdio.h>

int main(void) {
	float number, max = 0;

	for (int i = 0; i < 6; i++) {
		printf("Enter a number: ");
		scanf("%f", &number);

		if (number >= max) {
			max = number;
		}
	}

	printf("The largest number entered was %.2f\n", max);

	return 0;
}
