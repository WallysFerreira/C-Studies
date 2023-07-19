#include <stdio.h>

#define LENGTH ((int) (sizeof(grades) / sizeof(grades[0])))

int main(void) {
	float grades[5], max = 0, min = 10, avg = 0;

	for (int i = 0; i < 5; i++) {
		printf("Enter the grade for student %d: ", i + 1);
		scanf("%f", &grades[i]);
	}

	for (int i = 0; i < LENGTH; i++) {
		avg += grades[i];

		if (grades[i] > max) {
			max = grades[i];
		}

		if (grades[i] < min) {
			min = grades[i];
		}
	}

	avg /= LENGTH;

	printf("Average grade: %.2f\nMax grade: %.2f\nMin grade: %.2f\n", avg, max, min);

	return 0;
}
