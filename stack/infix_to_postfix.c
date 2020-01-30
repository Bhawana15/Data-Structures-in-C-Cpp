/******* CONVERT INFIX EXPRESSION TO POSTFIX EXPRESSION ********/

#include <stdio.h>
#define SIZE 20

struct stack_type{
	char item[SIZE];
	int top;
};
typedef struct stack_type stack;

void create(stack *S);
void push(stack *S);
void pop(stack *S);
void infix_to_postfix();

int m = 0, length;
char A[40], c;

int main()
{
	printf("###### Program to convert infix expression to postfix expression ######\n");
	printf("Enter your infix expression and to quit enter a fullstop(.) :\n");
	while(c = getc(stdin) != "\n"){
		A[m] = c;
		m++;
	}
	length = m;
	infix_to_prefix();
	
	return 0;
}

void create(stack *S){
	S->top = 0;
}

void push(stack *S, int data){
	if(S->top >= SIZE)
		printf("Stack is full!!! DATA OVERFLOW!!!");
	else{
		S->item[S->top] = data;
		(S->top)++;
	}
}

void pop(stack *S){
	if(S->top <= 0)
		printf("\nStack is empty");
	else{
		data = S->item[S->top];
		(S->top)--;
		printf("%d popped from stack\n", data);
	}
}

void infix_to_postfix()
{
	stack S;
	create(&S);
