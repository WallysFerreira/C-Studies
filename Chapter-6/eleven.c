#include <stdio.h>

int main(void) {
	int number, div;
	float e = 1;

	printf("Enter the final value: ");
	scanf("%d", &number);

	for (int i = 1; i <= number; i++) {
		div = 1;
		for (int j = i; j >= 1; j--) {
			div *= j;
		}

		e += 1.0f/div;
	}

	printf("%.3f\n", e);

	return 0;
}
