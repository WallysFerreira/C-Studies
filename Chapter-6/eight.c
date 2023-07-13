#include <stdio.h>

int main(void) {
	int days_qnt, starting_day;

	printf("Enter number of days in month: ");
	scanf("%d", &days_qnt);

	printf("Enter starting day of the week (1 = Sun, 7 = Sat): ");
	scanf("%d", &starting_day);

	printf("\nSun Mon Tue Wed Thu Fri Sat\n");
	for (int i = 1; i <= days_qnt + starting_day - 1; i++) {
		if (i < starting_day) {
			printf("    ");
		} else {
			printf("%3d ", i + 1 - starting_day);
		}
		
		if (i % 7 == 0) {
			printf("\n");
		} 
	}

	printf("\n");

	return 0;
}
