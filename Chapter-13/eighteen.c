#include <stdio.h>

int main(void) {
	char* month_name[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int day, month, year;

	printf("Enter a date (dd/mm/yyyy): ");
	scanf("%2d /%2d /%4d", &day, &month, &year);

	printf("%s %d, %d.\n", month_name[month - 1], day, year);

	return 0;
}
