#include "stack.h"
#include <stdio.h>

/*	Stack Library - This library offers the minimal stack operations
	for a stack of integers. */

struct stack_rec
{
	stack_data data;
	struct stack_rec *next;
};

struct stack_rec *top=NULL;

void stack_init()
/*	Initializes this library.
	Call before calling anything else. */
{
	top=NULL;
}

void stack_clear()
/*	Clears the stack of all entries. */
{
	stack_data x;
	while (!stack_empty())
		x=stack_pop();
}

int stack_empty()
/*	Returns 1 if the stack is empty, 0 otherwise. */
{
	if (top==NULL)
		return(1);
	else
		return(0);
}

void stack_push(stack_data d)
/*	Pushes the value d onto the stack. */
{
	struct stack_rec *temp;
	temp=(struct stack_rec *)malloc(sizeof(struct stack_rec));
	temp->data=d;
	temp->next=top;
	top=temp;
}

stack_data stack_pop()
/*	Returns the top element of the stack,
	and removes that element.
	Returns garbage if the stack is empty. */
{
	struct stack_rec *temp;
	stack_data d=0;
	if (top!=NULL)
	{
		d=top->data;
		temp=top;
		top=top->next;
		free(temp);
	}
	return (d);
}

void dup();
/*	Duplicates the top element of the stack. */
{
	struct stack_rec *temp;
	temp=(struct stack_rec *)malloc(sizeof(struct stack_rec));
	if (top!=NULL)
	{
		temp->data=top->data;
		temp->next=top;
		top=temp;
	}
}

int stack_count();
/*	Returns a count of the number of elements in the stack. */
{
	int count=0;
	struct stack_rec *temp;
	temp=top;
	if (top!=NULL)
	{
		count++;
		temp++;
	}
}

stack_data add();
/*	Adds the top two elements in the stack and
	returns the value. */
{
	stack_data sum;
	sum=top->data + top->next->data;
	return sum;
}