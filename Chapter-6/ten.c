#include <stdio.h>

int main(void) {
	int day, month, year, min_day = 100, min_month = 100, min_year = 100;

	while (1) {
		printf("Enter a date (dd/mm/yy): ");
		scanf("%d /%d /%d", &day, &month, &year);

		if (day == 0 && month == 0 && year == 0) {
			break;
		}

		if (year <= min_year) {
			min_day = day;
			min_month = month;
			min_year = year;
		} else if (year == min_year && month < min_month) {
			min_day = day;
			min_month = month;
			min_year = year;
		} else if (year == min_year && month == min_month && day < min_day) {
			min_day = day;
			min_month = month;
			min_year = year;
		}
	} 

	printf("%d/%d/20%.2d\n", min_day, min_month, min_year);

	return 0;
}
