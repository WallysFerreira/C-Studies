#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define SIZE 100

char contents[SIZE];
int top = 0;

void stack_overflow(void);
void stack_underflow(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);

int main(void) {
	char c;
	int n1, n2;

	printf("Enter an RPN expression: ");
	
	for (;;) {
		scanf(" %c", &c);

		switch (c) {
			case '+':
				n2 = pop();
				n1 = pop();
				push(n1 + n2);
				break;
			case '-':
				n2 = pop();
				n1 = pop();
				push(n1 - n2);
				break;
			case '/':
				n2 = pop();
				n1 = pop();
				push(n1 / n2);
				break;
			case '*':
				n2 = pop();
				n1 = pop();
				push(n1 * n2);
				break;
			case '=':
				printf("Value of expression: %d\n", pop());
				top = 0;
				printf("Enter an RPN expression: ");
				break;
			case ' ': case '\n':
				break;
			default:
				if (isdigit(c)) {
					push(c - '0');
				} else {
					exit(EXIT_SUCCESS);
				}
		}
	}

	return 0;
}

void stack_overflow(void) { printf("Stack overflow\n"); }

void stack_underflow(void) { printf("Stack underflow\n"); }

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == SIZE; }

void push(char c) {
	if (is_full()) {
		stack_overflow();
	} else {
		contents[top++] = c;
	}
}

char pop(void) {
	if (is_empty()) {
		stack_underflow();
		return 0;
	} else {
		return contents[--top];
	}
}

