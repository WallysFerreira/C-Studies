#include <stdio.h>

int main(void) {
	float n1, n2, n3, result;
	char op1, op2;

	printf("Enter an expression: ");
	scanf("%f %c %f %c %f", &n1, &op1, &n2, &op2, &n3);

	switch (op1) {
		case '+':
			result = n1 + n2;
			break;
		case '-':
			result = n1 - n2;
			break;
		case '*':
			result = n1 * n2;
			break;
		case '/':
			result = n1 / n2;
			break;
	}

	switch (op2) {
		case '+':
			result += n3;
			break;
		case '-':
			result -= n3;
			break;
		case '*':
			result *= n3;
			break;
		case '/':
			result /= n3;
			break;
	}

	printf("The result is %.2f\n", result);

	return 0;
}
