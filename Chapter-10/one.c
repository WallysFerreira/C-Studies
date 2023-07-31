#include <stdio.h>

#define STACK_SIZE 100

typedef int bool;

char contents[STACK_SIZE];
int top = 0;

void stack_overflow() {
	printf("Stack overflow!\n");
}

void stack_underflow() {
	printf("Stack underflow!\n");
}

void empty_stack(void) {
	top = 0;
}

bool is_empty(void) {
	return top == 0;
}

bool is_full(void) {
	return top == STACK_SIZE;
}

void push(char i) {
	if (is_full()) {
		stack_overflow();
	} else {
		contents[top++] = i;
	}
}

char pop(void) {
	if (is_empty()) {
		stack_underflow();
		return '\0';
	} else {
		return contents[--top];
	}
}

int main(void) {
	printf("Enter parentheses and/or braces: ");
	for (int i = 0; i < STACK_SIZE; i++) {
		char c;
		scanf("%c", &c);

		if (c == '(' || c == '{') {
			push(c);
		}

		if ((c == ')' && pop() != '(') || (c == '}' && pop() != '{')) {
			printf("Parentheses/braces are not matched properly\n");
			break;
		}

		if (c == '\n') {
			printf("%s\n", is_empty() ? "Parentheses/braces are matched properly" : "Parentheses/braces are not matched properly");
			break;
		}
			
		printf("\nDEBUG %d\n\n", top);
	}

	return 0;
}
