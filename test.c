#include <stdio.h>
#include <string.h>
#include "stackArray.h"


int main()
{
    Stack stack;
    
    initStack(&stack);
    
    push(&stack, 'E');
    push(&stack, 'c');
	push(&stack, 'D');
	push(&stack, 'b');
	push(&stack, 'a');
	printf("Stack before pop\n");
	displayStack(stack);
	pop(&stack);
	pop(&stack);
	pop(&stack);

    printf("Stack after pop\n");
	displayStack(stack);
	
	return 0;
}