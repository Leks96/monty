#include "monty.h"
/**
* execute_instruction - Executes a single Monty instruction.
* @instruction: The Monty instruction to execute.
* @stack: Double pointer to the top of the stack.
* @line_number: The line number in the Monty file.
*/
void execute_instruction(char *instruction, stack_t **stack, unsigned int line_number)
{
	char *opcode, *arg;
	int value;

	opcode = strtok(instruction, " \t\n");
	if (opcode == NULL)
		return;

	arg = strtok(NULL, " \t\n");
	value = (arg != NULL) ? atoi(arg) : 0;

	if (strcmp(opcode, "push") == 0)
		push(stack, value, line_number);
	else if (strcmp(opcode, "pint") == 0)
		pall(stack, line_number);
	else
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}
}
