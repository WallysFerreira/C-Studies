#include <stdio.h>

int main(void) {
	int amount;
	int twenty = 0, ten = 0, five = 0, one = 0;

	printf("Enter an amount in dollars: ");
	scanf("%d", &amount);

	twenty = amount / 20;
	amount -= twenty * 20;

	ten = amount / 10;
	amount -= ten * 10;

	five = amount / 5;
	amount -= five * 5;

	one = amount / 1;
	amount -= one;

	printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", twenty, ten, five, one);
}
