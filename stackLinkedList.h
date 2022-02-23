#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

/***** Data Structure Definition *****/

typedef struct node {
	char data;
	struct node *link;
}*Stack;

void initStack(Stack *S);
void push(char elem, Stack *S);
void pop(Stack *S);
char top(Stack S);
int isEmpty(Stack S);
void displayStack(Stack S);
void insertBottom(Stack *S, char data);



void initStack(Stack *S)
{
	*S=NULL;
}

void push(char elem, Stack *S)
{
	Stack temp;
	
	temp=(Stack)malloc(sizeof(struct node));
	
	if(temp!=NULL)
	{
		temp->data=elem;
		temp->link=*S;
		*S=temp;
	}
}

void pop(Stack *S)
{
	Stack temp;
	
	if(*S!=NULL)
	{
		temp=*S;
		*S=temp->link;
		free(temp);
	}
}

char top(Stack S)
{
	return (S!=NULL) ? S->data : -1;
}

int isEmpty(Stack S)
{
	return(S == NULL) ? 1 : 0;
}

void displayStack(Stack S)
{
	Stack temp;
	initStack(temp);
	
	while(top(S)!=-1)
	{
		push(temp,top(S));
		pop(S);
	}
	while(top(temp)!=-1)
	{
		printf("%d", top(temp));
		push(S,top(temp));
		pop(&temp);
	}
}

void insertBottom(Stack *S, char data)
{
	Stack temp;
	
	initStack(&temp);
	
	while(!isEmpty(*S))
		{
			push(&temp,top(S));
			pop(S);
		}
		
	push(S,data);
	
	while(!isEmpty(temp))
		{
			push(S,top(temp));
			pop(&temp);
		}

}











#endif
