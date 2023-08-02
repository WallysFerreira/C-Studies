#include <stdio.h>
#include <stdbool.h>

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
	printf("Enter an RPN expression: ");

	return 0;
}
