#include <stdio.h>
#include <string.h>
#include "stackArray.h"


int main()
{
    Stack stack;
    char topCpy;
    char popChar;
    
    initStack(&stack);
    
    push(&stack, 'E');
    push(&stack, 'c');
	push(&stack, 'D');
	push(&stack, 'b');
	push(&stack, 'a');
    push(&stack, 'E');
    push(&stack, 'c');
	push(&stack, 'D');
	push(&stack, 'b');
	push(&stack, 'a');
	push(&stack, 'E');
	printf("Stack before pop\n");
	displayStack(stack);
	
	printf("Stack after pop\n");
	popChar = pop(&stack);
	popChar = pop(&stack);
	popChar = pop(&stack);
	displayStack(stack);
	
//	topCpy = top(stack);
//	printf("top %c\n", topCpy);
//	
	insertBottom(&stack,'K');
	printf("Stack after insertBottom\n");
	displayStack(stack);
	
	return 0;
}