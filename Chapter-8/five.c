#include <stdio.h>

#define LENGTH ((int) (sizeof(values) / sizeof(values[0])))
#define INITIAL_BALANCE 100
#define FINAL_INTEREST (interest + 4)

int main(void) {
	float interest, values[5];
	int years;

	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter number of years: ");
	scanf("%d", &years);

	for (int i = 0; i < LENGTH; i++) {
		values[i] = INITIAL_BALANCE;
	}

	printf("Years");
	for (int i = interest; i <= FINAL_INTEREST; i++) {
		printf("%6d%%", i);
	}
	printf("\n");

	for (int i = 1; i <= years; i++) {
		printf("%3d	", i);

		for (int j = 0; j < LENGTH; j++) {
			for (int x = 0; x < 12; x++) {
				values[j] += (interest + j) / 100 / 12  * values[j];
			}
			printf("%7.2f", values[j]);
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}
