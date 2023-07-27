#include <stdio.h>

#define LEN 10

void selection_sort(int n, int arr[]);

int main(void) {
	int arr[LEN];

	printf("Enter %d integers: ", LEN);
	for (int i = 0; i < LEN; i++) scanf("%d", &arr[i]);
	printf("\n");

	selection_sort(LEN, arr);

	printf("Sorted: ");
	for (int i = 0; i < LEN; i++) printf("%d ", arr[i]);
	printf("\n");

	return 0;
}

void selection_sort(int n, int arr[]) {
	if (n < 0) return; 

	int max = arr[n - 1];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			arr[i] = arr[n - 1];
			arr[n - 1] = max;
		}
	}

	selection_sort(n - 1, arr);
}
