#include <stdio.h>
#include <math.h>

int main(void) {
	int x;
	
	printf("Enter the value for x: ");
	scanf("%d", &x);

	int final = (3 * pow(x, 5)) + (2 * pow(x, 4)) - (5 * pow(x, 3)) - pow(x, 2) + (7 * x) - 6;

	printf("The final value is %d\n", final);
}
