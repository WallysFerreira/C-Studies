#include <stdio.h>

int main(void) {
	int n, i;
	volatile char c;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		printf("%10d%10d\n", i, i * i);
		
		if (i % 24 == 0) {
			printf("Press enter to continue...");
			if (getchar() == '\n') {
				do {
				} while (getchar() != '\n');
			}
		}
	}

	return 0;
}
