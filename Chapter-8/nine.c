#include <stdio.h>

#define DOWN	0
#define LEFT	1
#define UP		2
#define RIGHT 3

int main(void) {
	char table[10][10];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			table[i][j] = '.';
		}
	}

	return 0;
}
