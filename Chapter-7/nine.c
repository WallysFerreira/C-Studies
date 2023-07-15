#include <stdio.h>

int main(void) {
	int hours, minutes;
	char period;

	printf("Enter a 12-hour time: ");
	scanf("%d :%d %c", &hours, &minutes, &period);

	printf("Equivalent 24-hour time: %d:%.2d\n", period == 'a' ? hours : hours + 12, minutes);

	return 0;
}
