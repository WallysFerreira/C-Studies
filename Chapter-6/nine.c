#include <stdio.h>

int main(void) {
	float amount, interest, payment;
	int fixed, payment_qnt;

	printf("Enter amount of loan: ");
	scanf("%f", &amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest);

	printf("Will you have a fixed monthly payment amount?\nEnter 1 for yes and 2 for no: ");
	scanf("%d", &fixed);

	printf("Enter how many payments you want to make: ");
	scanf("%d", &payment_qnt);
	printf("Enter the monthly payment amount: ");
	scanf("%f", &payment);

	interest /= 100;
	interest /= 12;

	if (fixed) {
		for (int i = 0; i < payment_qnt; i++) {
			amount += amount * interest;
			amount -= payment;
			printf("Balance remaining after payment %d %.2f\n", i + 1, amount);
		}
	}

	return 0;
}
