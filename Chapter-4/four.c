#include <stdio.h>

int main(void) {
	int number;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &number);

	printf("%.5o\n", number);
	
	return 0;
}
