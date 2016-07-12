/*	Stack Library - This library offers the minimal operations for a
	stack of integers (easily changeable) */

typedef int stack_data;

extern void stack_init();
/*	Initializes this library.
	Call first before calling anything. */

extern void stack_clear();
/*	Clears the stack of all entries. */

extern int stack_empty();
/*	Returns 1 if the stack is empty, 0 otherwise. */

extern void stack_push(stack_data d);
/*	Pushes the value d onto the stack. */

extern stack_data stack_pop();
/*	Returns the top element of the stack,
	and removes that element.
	Returns garbage if stack is empty. */

extern void dup();
/*	Duplicates the top element of the stack. */

extern int stack_count();
/*	Returns a count of the number of elements in the stack. */

extern stack_data add();
/*	Adds the top two elements in the stack and
	returns the value. */