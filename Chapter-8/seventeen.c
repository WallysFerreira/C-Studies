#include <stdio.h>

int main(void) {
	int n, matrix[99][99] = {0};

	printf("This program creates a magic square.\nEnter an odd number between 1 and 99: ");
	scanf("%d", &n);

	int x = n / 2, y = 0;
	int next_y, next_x;

	for (int i = 1; i <= n * n; i++) {
		matrix[y][x] = i;

		// If y - 1 is less than 0, y becomes the last index.
		next_y = y - 1 < 0 ? n - 1 :  y - 1;

		// If x + 1 is greater than the last possible index, x becomes the first index.
		next_x = x + 1 >= n ? 0 : x + 1;

		// If the position is already occupied, x stays the same and 1 is added to y.
		if (matrix[next_y][next_x] != 0) {
			next_x = x;
			next_y = y + 1;
		}

		x = next_x;
		y = next_y;
	}

	printf("\n");

	// Print final table
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%5d ", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
