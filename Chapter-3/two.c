#include <stdio.h>

int main(void) {
	int number, month, day, year;
	float price;

	printf("Enter item number: ");
	scanf("%d", &number);

	printf("Enter unit price: ");
	scanf("%f", &price);

	printf("Enter purchase date (mm/dd/yyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item	Unit Price	Purchase Date\n");
	printf("%-4d	$%6.2f	%d/%d/%d\n", number, price, month, day, year);

	return 0;
}
