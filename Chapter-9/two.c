#include <stdio.h>

float calculate_tax(float);

int main(void) {
	float income;

	printf("Enter the amount of taxable income: ");
	scanf("%f", &income);

	printf("You need to pay $%.2f\n", calculate_tax(income));

	return 0;
}

float calculate_tax(float income) {
	if (income <= 750) {
		return 0.01 * income;
	} else if (income > 750 && income <= 2250) {
		return 7.50 + 0.02 * (income - 750);
	} else if (income > 2250 && income <= 3750) {
		return 37.5 + 0.03 * (income - 2250);
	} else if (income > 3750 && income <= 5250) {
		return 82.5 + 0.04 * (income - 3750);
	} else if (income > 5250 && income <= 7000) {
		return 142.5 + 0.05 * (income - 5250);
	} else {
		return 230 + 0.06 * (income - 7000);
	}
}
