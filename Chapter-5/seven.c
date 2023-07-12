#include <stdio.h>

int main(void) {
	int n1, n2, n3, n4, largest, smallest;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	largest = n1;
	smallest = n1;

	if (n2 > largest) {
		largest = n2;
	} else if (n2 < smallest) {
		smallest = n2;
	}

	if (n3 > largest) {
		largest = n3;
	} else if (n3 < smallest) {
		smallest = n3;
	}

	if (n4 > largest) {
		largest = n4;
	} else if (n4 < smallest) {
		smallest = n4;
	}

	printf("Largest: %d\nSmallest: %d\n", largest, smallest);

	return 0;
}
