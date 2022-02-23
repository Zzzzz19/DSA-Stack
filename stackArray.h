#define SIZE 10


typedef struct 
{
    char data[SIZE];
    int top;
}Stack;

void initStack(Stack *S)
{
    S->top = -1;
}

int isFull(Stack S)
{
	return S.top == SIZE-1 ? 1 : 0;
}

int isEmpty(Stack S)
{
	return S.top == -1 ? 1 : 0;
}

void push(Stack *S, char data)
{
    if(!isFull(*S)){
        S->data[S->top+1] = data;
        S->top++;	
    }
}

char pop(Stack *S)
{
	char ret;
    if (!isEmpty(*S))
    {
    	ret = S->data[S->top];
    	S->data[S->top--] = NULL;
	}
    
    return ret;
}

void displayStack(Stack S)
{
	printf("%s\n", S.data);
}

char top(Stack S)
{
	return S.data[S.top];
}

void insertBottom(Stack *S, char data)
{
	Stack temp;
		
	if(!isFull(*S)){
		initStack(&temp);
		
		while(!isEmpty(*S)){	            
	 		push(&temp,pop(S));
		}
		
		push(S,data);
		
		while(!isEmpty(temp)){
			push(S,pop(&temp));
		}
	}
}
		
   
   