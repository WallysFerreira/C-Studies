#include <stdio.h>

// Largest with short = 7
// Largest with int = 12
// Largest with long = 20
// Largest with float = 34
// Largest with double = 170
// Largest with long double = 1754

int main(void) {
	int input, input_before;
	long double fact;

	printf("Enter a positive number: ");
	scanf("%d", &input);

	input_before = input;

	for (fact = input; input - 1 >= 1; input--) {
		fact *= input - 1;
	}

	printf("Factorial of %d: %Lf\n", input_before, fact);

	return 0;
}
