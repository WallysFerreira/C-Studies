#include <stdio.h>

#define PI 3.14

int main(void) {
	int radius;
	printf("Enter the radius of the sphere: ");
	scanf("%d", &radius);

	float volume = (4.0f/3.0f) * PI * (radius * radius * radius);
	printf("Volume is %.2fm³\n", volume);

	return 0;
}
