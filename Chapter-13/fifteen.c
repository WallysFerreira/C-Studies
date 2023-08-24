#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

char contents[SIZE];
int top = 0;

void stack_overflow(void);
void stack_underflow(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);
int evaluate_RPN_expression(const char *expression);

int main(void) {
	char *string;

	printf("Enter an RPN expression: ");

	for (;;) {
		fgets(string, SIZE, stdin);
	
		printf("Result: %d\n", evaluate_RPN_expression(string));
		top = 0;
		printf("Enter an RPN expression: ");
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

int evaluate_RPN_expression(const char *expression) {
	int n1, n2;

	for (int i = 0; i < strlen(expression); i++) {
		char c = expression[i];

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
				return pop();
				break;
			case ' ': case '\n':
				break;
			default:
				if (isdigit(c)) {
					push(c - '0');
				} else {
					exit(EXIT_SUCCESS);
				}
				break;
		}
	}
}

