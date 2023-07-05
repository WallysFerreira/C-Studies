#include <stdio.h>

int main(void) {
	float amount;

	printf("Enter amount in dollars: ");
	scanf("%f", &amount);

	float final = amount + (amount * 0.05);

	printf("With 5%% tax: $%.2f\n", final);
}
