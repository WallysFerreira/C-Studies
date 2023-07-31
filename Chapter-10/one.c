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

	return 0;
}
