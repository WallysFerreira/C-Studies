#include <stdio.h>

int main(void) {
	float amount, interest, payment;

	printf("Enter amount of loan: ");
	scanf("%f", &amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);

	interest = (interest / 100) / 12;


	float afterFirst = amount + (amount  * interest);
	afterFirst -= payment;
	float afterSecond = afterFirst + (afterFirst * interest);
	afterSecond -= payment;
	float afterThird = afterSecond + (afterSecond * interest);
	afterThird -= payment;

	printf("Balance remaining after first payment: $%.2f\nBalance remaining after second payment: $%.2f\nBalance remaining after third payment: $%.2f\n", afterFirst, afterSecond, afterThird); 
}
