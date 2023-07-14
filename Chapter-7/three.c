#include <stdio.h>

int main(void) {
	double n, sum = 0;

	printf("Enter integers (enter 0 to end): ");
	scanf("%lf", &n);

	while (n != 0) {
		sum += n;
		printf("Enter integers (enter 0 to end): ");
		scanf("%lf", &n);
	}

	printf("%.1lf\n", sum);

	return 0;
}
