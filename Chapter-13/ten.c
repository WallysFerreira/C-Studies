#include <ctype.h>
#include <string.h>
#include <stdio.h>

void reverse_name(char *name);

int main(void) {
	char *input;

	printf("Enter a first and last name: ");
	fgets(input, 25, stdin);

	reverse_name(input);

	printf("%s\n", input);
	return 0;
}

void reverse_name(char *name) {
	int first_name_start, first_name_end, last_name_start, last_name_end = strlen(name) - 2;

	// Find indexes
	for (int i = 0; i < strlen(name); i++) {
		if (name[i] != ' ') { 
			first_name_start = i;
			break;
		}
	}
	for (int i = first_name_start; i < strlen(name); i++) {
		if (name[i] == ' ') {
			first_name_end = i - 1;
			break;
		}
	}
	for (int i = first_name_end + 1; i < strlen(name); i++) {
		if (name[i] != ' ') {
			last_name_start = i;
			break;
		}
	}
	for (int i = last_name_start; i < strlen(name); i++) {
		if (name[i] == ' ') {
			last_name_end = i - 1;
			break;
		}
	}

	// Break string into first and last names
	char first_name = name[first_name_start];
	char last_name[last_name_end - last_name_start + 1];

	int j = last_name_start;
	for (int i = 0; i < last_name_end - last_name_start + 1; i++) {
		last_name[i] = name[j];
		j++;
	}
	last_name[last_name_end - last_name_start + 1] = '\0';

	// Make final string
	char final_string[last_name_end - last_name_start + 5];

	sprintf(final_string, "%s, %c.", last_name, toupper(first_name));
	
	// Copy final string into original string
	strcpy(name, final_string);
}
