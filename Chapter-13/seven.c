#include <stdio.h>

int main(void) {
	char *tens_str[] = {"Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
	char *uni_str[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	char *special_str[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Nineteen"};
	int number, tens, uni;

	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	if (number >= 10 && number <= 19) {
		printf("%s\n", special_str[number - 10]);
		return 0;
	}

	uni = number % 10;
	tens = number / 10;

	printf("%s ", tens_str[tens - 2]);
	printf("%s\n", uni_str[uni - 1]);

	return 0;
}
