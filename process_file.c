#include "monty.h"
#include <stdio.h>
/**
* process_file - Processes bytecode instructions from a file.
* @file: Pointer to the opened Monty bytecode file.
* @stack: Double pointer to the top of the stack.
*/
void process_file(FILE *file, stack_t **stack)
{
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;

	while (fgets(line, len, file) != NULL)
	{
		size_t line_len;
		line_number++;

		line_len = strlen(line);

		if (line_len > 0 && line[line_len - 1] == '\n')
			line[--line_len] = '\0';

		if (line_len > 0)
			execute_instruction(line, stack, line_number);
	}

	free(line);
}
