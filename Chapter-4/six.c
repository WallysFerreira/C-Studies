#include <stdio.h>

int main(void) {
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;
	int digit, first_sum, second_sum;

	printf("Enter the EAN code without the last digit: ");
	scanf("%1d %1d%1d%1d%1d%1d%1d %1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

	first_sum = n2 + n4 + n6 + n8 + n10 + n12;
	second_sum = n1 + n3 + n5 + n7 + n9 + n11;

	first_sum *= 3;
	first_sum += second_sum - 1;

	digit = first_sum % 10;
	digit = 9 - digit;

	printf("Digit: %d\n", digit);
	
	return 0;
}
