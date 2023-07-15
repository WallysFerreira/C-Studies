#include <math.h>
#include <stdio.h>

int main(void) {
	double input, first_guess = 1, last_guess, avg;
	
	printf("Enter a positive number: ");
	scanf("%lf", &input);

	do {
		avg = (first_guess + (input / first_guess)) / 2;
		last_guess = first_guess;
		first_guess = avg;
	} while (fabs(last_guess - first_guess) > 0.00001 * first_guess);

	printf("Square root: %lf\n", first_guess);
	return 0;
}
