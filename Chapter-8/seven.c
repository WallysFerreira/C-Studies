#include <stdio.h>

#define COLS 5
#define ROWS 5

int main(void) {
	int matrix[ROWS][COLS];

	printf("Enter a 5x5 matrix\n");
	for (int i = 0; i < ROWS; i++) {
		printf("Enter row %d: ", i + 1);
		for (int j = 0; j < COLS; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	printf("\n");

	printf("Row totals: ");
	for (int i = 0; i < ROWS; i++) {
		int sum = 0;
		for (int j = 0; j < COLS; j++) {
			sum += matrix[i][j];
		}
		printf("%d ", sum);
	}

	printf("\n");

	printf("Column totals: ");
	for (int j = 0; j < COLS; j++) {
		int sum = 0;
		for (int i = 0; i < ROWS; i++) {
			sum += matrix[i][j];
		}
		printf("%d ", sum);
	}
	
	return 0;
}
