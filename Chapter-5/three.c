#include <stdio.h>

float original_broker(float share) {
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

float rival_broker(float share) {
	float commission = 33.0f;

	if (share < 2000) {
		commission += share * 0.03f;
	} else {
		commission += share * 0.02f;
	}

	return commission;
}

int main(void) {
	int share_qnt;
	float share_total, share_price, commission1, commission2;

	printf("Enter the quantity of shares purchased: ");
	scanf("%d", &share_qnt);

	printf("Enter the price per share: $");
	scanf("%f", &share_price);

	share_total = share_qnt * share_price;

	commission1 = original_broker(share_total);
	commission2 = rival_broker(share_qnt);

	printf("\nOriginal broker commission: $%.2f\n", commission1);
	printf("Rival broker commission: $%.2f\n", commission2);

	return 0;
}
