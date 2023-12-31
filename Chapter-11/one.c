#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) {
	int amount, twenties, tens, fives, ones;

	printf("Enter an amount in dollars: ");
	scanf("%d", &amount);

	pay_amount(amount, &twenties, &tens, &fives, &ones);

	printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", twenties, tens, fives, ones);
	
	return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
	*twenties = dollars / 20;
	dollars -= *twenties * 20;

	*tens = dollars / 10;
	dollars -= *tens * 10;

	*fives = dollars / 5;
	dollars -= *fives * 5;

	*ones = dollars;
}

