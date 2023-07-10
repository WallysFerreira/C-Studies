#include <stdio.h>

int main(void) {
	int first, second, third;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &first, &second, &third);

	printf("%d.%d.%d\n", first, second, third);
	return 0;
}
