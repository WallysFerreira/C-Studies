#include <stdio.h>

int main(void) {
	int div = 1;
	float number, final = 1.0f;

	printf("Enter a small decimal value: ");
	scanf("%f", &number);
	
	int i = 1;
	while (final > number) {
		int j = i;

		while (j >= 1) {
			div *= j;
			j--;
		}

		final = 1.0f/div;

		i++;
	}

	printf("1/1 to 1/%d = %f\n", div, final);

	return 0;
}
