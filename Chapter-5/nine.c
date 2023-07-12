#include <stdio.h>

int main(void) {
	int day1, day2, month1, month2, year1, year2;

	printf("Enter first date (dd/mm/yy): ");
	scanf("%2d /%2d /%2d", &day1, &month1, &year1);

	printf("Enter second date (dd/mm/yy): ");
	scanf("%2d /%2d /%2d", &day2, &month2, &year2);

	if (year1 < year2) {
		printf("%.2d/%.2d/20%.2d is earlier than %.2d/%.2d/20%.2d\n", day1, month1, year1, day2, month2, year2); 
	} else if (year1 == year2 && month1 < month2) {
		printf("%.2d/%.2d/20%.2d is earlier than %.2d/%.2d/20%.2d\n", day1, month1, year1, day2, month2, year2); 
	} else if (year1 == year2 && month1 == month2 && day1 < day2) {
		printf("%.2d/%.2d/20%.2d is earlier than %.2d/%.2d/20%.2d\n", day1, month1, year1, day2, month2, year2); 
	} else {
		printf("%.2d/%.2d/20%.2d is earlier than %.2d/%.2d/20%.2d\n", day2, month2, year2, day1, month1, year1); 
	}

	return 0;
}
