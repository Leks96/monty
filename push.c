#include "monty.h"
/**
* push - Pushes an element to the stack.
* @stack: Double pointer to the top of the stack.
* @value: The integer value to be pushed.
* @line_number: The line number in the Monty file.
*/
void push(stack_t **stack, int value, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc fsiled\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
}
