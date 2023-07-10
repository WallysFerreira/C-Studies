#include <stdio.h>

int main(void) {
	int month, day, year;

	printf("Enter date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("%d%.2d%d\n", year, month, day);

	return 0;
}
