#include "monty.h"
/**
* pall - Prints all the values on the stack.
* @stack: Double pointer to the top of the stack.
* @line_number: The line number in the Monty file.
*/
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;

	(void)line_number;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
}
