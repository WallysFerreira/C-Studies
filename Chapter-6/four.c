#include <stdio.h>

float calculate_commission(float share) {
	float commission;

	if (share < 2500.0f) {
		commission = 30.0f + 0.017f * share;
	} else if (share >= 2500.0f && share < 6250.0f) {
		commission = 56.0f + 0.0066f * share;
	} else if (share >= 6250.0f && share < 20000.0f) {
		commission = 76.0f + 0.0034f * share;
	} else if (share >= 20000.0f && share < 50000.0f) {
		commission = 100.0f + 0.0022f * share;
	} else if (share >= 50000.0f && share < 500000.0f) {
		commission = 155.0f + 0.0011f * share;
	} else {
		commission = 255.0f + 0.0009f * share;
	}

	if (commission < 39.0f) {
		commission = 39.0f;
	}

	return commission;
}

int main(void) {
	float value, commission;

	while (1) {
		printf("Enter value of the trade: ");
		scanf("%f", &value);

		if (value == 0) {
			break;
		}

		printf("Commission: $%.2f\n", calculate_commission(value));
	}

	return 0;
}
