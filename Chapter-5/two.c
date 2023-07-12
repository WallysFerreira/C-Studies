#include <stdio.h>

int main(void) {
	int hour, minute;

	printf("Enter a time in 24 hour format: ");
	scanf("%2d:%2d", &hour, &minute);

	if (hour > 12) {
		printf("%.2d:%.2d PM\n", hour - 12, minute);
	} else if (hour == 12) {
		printf("%.2d:%.2d PM\n", hour, minute);
	} else {
		printf("%.2d:%.2d AM\n", hour, minute);
	}
	
	return 0;
}
