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
	
	for (int i = 0; i < SIZE; i++) {
		scanf("%c", &c);
		
		switch (c) {
			case '+':
				n1 = c - '0';
				n2 = c - '0';
				push(n1 + n2);
				break;
			case '-':
				n1 = c - '0';
				n2 = c - '0';
				push(n1 - n2);
				break;
			case '/':
				n1 = c - '0';
				n2 = c - '0';
				push(n1 / n2);
				break;
			case '*':
				n1 = c - '0';
				n2 = c - '0';
				push(n1 * n2);
				break;
			case '=':
				printf("Value of expression: %d\n", pop());
				break;
			case ' ':
				break;
			default:
				push(c);
		}
	}

	return 0;
}

void stack_overflow(void) { printf("Stack overflow\n"); }

void stack_underflow(void) { printf("Stack underflow\n"); }

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == SIZE; }

void push(char c) {
	printf("\nDEBUG char in push %c\n\n", c);

	if (is_full()) {
		stack_overflow();
	} else {
		contents[top++] = c;
	}
}

char pop(void) {
	printf("\nDEBUG contents[top - 1] %c\n\n", contents[top - 1]);
	if (is_empty()) {
		stack_underflow();
		return '\0';
	} else {
		return contents[--top];
	}
}
