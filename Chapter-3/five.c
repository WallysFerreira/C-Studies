#include <stdio.h>

int main(void) {
	int row1[4], row2[4], row3[4], row4[4];
	int row1sum = 0, row2sum = 0, row3sum = 0, row4sum = 0;
	int col1sum = 0, col2sum = 0, col3sum = 0, col4sum = 0;
	int d1sum = 0, d2sum = 0;

	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &row1[0], &row1[1], &row1[2], &row1[3], &row2[0], &row2[1], &row2[2], &row2[3], &row3[0], &row3[1], &row3[2], &row3[3], &row4[0], &row4[1], &row4[2], &row4[3]);

	for (int i = 0; i < 4; i++) {
		printf("%2d ", row1[i]);
		row1sum += row1[i];

		if (i == 0) {
			col1sum += row1[i];
		} else if (i == 1) {
			col2sum += row1[i];
		} else if (i == 2) {
			col3sum += row1[i];
		} else if (i == 3) {
			col4sum += row1[i];
		}
	}
	printf("\n");

	for (int i = 0; i < 4; i++) {
		printf("%2d ", row2[i]);
		row2sum += row2[i];

		if (i == 0) {
			col1sum += row2[i];
		} else if (i == 1) {
			col2sum += row2[i];
		} else if (i == 2) {
			col3sum += row2[i];
		} else if (i == 3) {
			col4sum += row2[i];
		}
	}
	printf("\n");

	for (int i = 0; i < 4; i++) {
		printf("%2d ", row3[i]);
		row3sum += row3[i];

		if (i == 0) {
			col1sum += row3[i];
		} else if (i == 1) {
			col2sum += row3[i];
		} else if (i == 2) {
			col3sum += row3[i];
		} else if (i == 3) {
			col4sum += row3[i];
		}
	}
	printf("\n");

	for (int i = 0; i < 4; i++) {
		printf("%2d ", row4[i]);
		row4sum += row4[i];

		if (i == 0) {
			col1sum += row4[i];
		} else if (i == 1) {
			col2sum += row4[i];
		} else if (i == 2) {
			col3sum += row4[i];
		} else if (i == 3) {
			col4sum += row4[i];
		}
	}
	printf("\n");

	d1sum += row1[0] + row2[1] + row3[2] + row4[3];
	d2sum += row1[3] + row2[2] + row3[1] + row4[0];

	printf("Row sums: %d %d %d %d\n", row1sum, row2sum, row3sum, row4sum);
	printf("Column sums: %d %d %d %d\n", col1sum, col2sum, col3sum, col4sum);
	printf("Diagonal sums: %d %d\n", d1sum, d2sum);
}
