#include <stdio.h>

int main(void) {
	int numerical;

	printf("Enter the numerical grade: ");
	scanf("%d", &numerical);


	if (numerical < 0 || numerical > 100) {
		printf("Invalid grade\n");
		return 0;
	}

	numerical /= 10;

	switch (numerical) {
		case(9): case(10):
			printf("A\n");
			break;
		case (8):
			printf("B\n");
			break;
		case (7):
			printf("C\n");
			break;
		case (6):
			printf("D\n");
			break;
		default:
			printf("F\n");
	}

	return 0;
}
