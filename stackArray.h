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

int isFull(Stack s)
{
	return s.top == SIZE-1 ? 1 : 0;
}

int isEmpty(Stack s)
{
	return s.top == -1 ? 1 : 0;
}

void push(Stack *s, char data)
{
    if(!isFull(*s)){
        s->data[s->top+1] = data;
        s->top++;	
    }
}

char pop(Stack *s)
{
	char ret;
    if (!isEmpty(*s))
    {
    	ret = s->data[s->top];
    	s->data[s->top--] = NULL;
	}
    
    return ret;
}

void displayStack(Stack s)
{
	printf("%s\n", s.data);
}

char top(Stack s)
{
	return s.data[s.top];
}

void insertBottom(Stack *s, char data)
{
	Stack temp;
		
	if(!isFull(*s)){
		initStack(&temp);
		
		while(!isEmpty(*s)){	            
	 		push(&temp,pop(s));
		}
		
		push(s,data);
		
		while(!isEmpty(temp)){
			push(s,pop(&temp));
		}
	}
}
		
   
   