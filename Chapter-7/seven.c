#include <stdio.h>

int find_lcm(int den1, int den2) {
	int gcd, remainder, quot;

	if (den2 > den1) {
		int plc = den1;
		den1 = den2;
		den2 = plc;
	}

	gcd = den1;
	int tmp = den2;

	do {
		quot = gcd / tmp;
		remainder = gcd % tmp;

		gcd = tmp;
		tmp = remainder;
	} while (remainder != 0);

	return (den1 * den2) / gcd;
}

// Simplify fraction in '-'
// Get result in '/'
int main(void) {
	int num1, denom1, num2, denom2, result_num, result_denom, lcm;
	char op;

	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d / %d %c %d / %d", &num1, &denom1, &op, &num2, &denom2);

	switch (op) {
		case '+':
			result_num = num1 * denom2 + num2 * denom1;
			result_denom = denom1 * denom2;
			break;
		case '-':
			lcm = find_lcm(denom1, denom2);
			result_denom = lcm;
			result_num = (lcm / denom1) * num1 - (lcm / denom2) * num2; 
			break;
		case '*':
			result_num = num1 * num2;
			result_denom = denom1 * denom2;
			break;
		case '/':
			result_num = num1 * denom2;
			result_denom = denom1 * num2;
			break;
	}

	printf("The result is %d/%d\n", result_num, result_denom);

	return 0;
}
