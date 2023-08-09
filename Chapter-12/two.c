#include <ctype.h>
#include <stdio.h>

#define N 20

int main(void) {
	char ch, string[N], reversed_string[N], *string_pointer, *reversed_pointer;

	printf("Enter a message: ");

	for (string_pointer = &string[0]; string_pointer < &string[N];) {
		ch = getchar();
		ch = toupper(ch);

		if (ch == '\n') break;
		if (ch >= 65 && ch <= 90) {
			*string_pointer = ch;
			string_pointer++;
		}
	}

	reversed_pointer = &reversed_string[0];
	for (string_pointer = &string[N]; string_pointer >= &string[0]; string_pointer--) {

		if (*string_pointer == '\0') continue;

		*reversed_pointer = *string_pointer;

		reversed_pointer++;
	}

	for (string_pointer = &string[0], reversed_pointer = &reversed_string[0]; string_pointer < &string[N]; string_pointer++, reversed_pointer++) {
		if (*string_pointer == '\0') {
			printf("Palindrome\n");
			break;
		}

		if (*string_pointer != *reversed_pointer) {
			printf("Not a palindrome\n");
			return 0;
		}
	}

	return 0;
}
