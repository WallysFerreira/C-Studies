#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[]) {
	char *planets[] = {"MERCURY", "VENUS", "EARTH", "MARS", "JUPITER", "SATURN", "URANUS", "NEPTUNE", "PLUTO"};
	int j;

	for (int i = 1; i < argc; i++) {
		for (j = 0; j < strlen(argv[i]); j++) {
			argv[i][j] = toupper(argv[i][j]);
		}

		for (j = 0; j < NUM_PLANETS; j++) {
			if (strcmp(argv[i], planets[j]) == 0) {
				printf("%s is planet %d\n", argv[i], j + 1);
				break;
			}
		}
		if (j == NUM_PLANETS) printf("%s is not a planet\n", argv[i]);
	}


	return 0;
}
