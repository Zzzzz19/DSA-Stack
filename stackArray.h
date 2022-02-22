#define SIZE 10


typedef struct 
{
    char data[SIZE];
    int top;
}Stack;

void initStack(Stack *s)
{
    s->top = -1;
}

void push(Stack *s, char data)
{
    if(isFull(*s)){
        s->data[s->top+1] = data;
        s->top++;
    }
}

void pop(Stack *s){
    if (isEmpty(*s))
    {
    	s->data[s->top--] = NULL;
    }
    
}

void isFull(Stack s)
{
	return s.top == SIZE-1 ? 1 : 0;
}

void isEmpty(Stack s)
{
	return s.top == -1 ? 1 : 0;
}

void displayStack(Stack s)
{
	puts(s.data);
}