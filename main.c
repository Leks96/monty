#include "monty.h"
/**
* main - Entry point for the Monty interpreter.
* @argc: Number of command-line arguments.
* @argv: Array of command-line argument strings.
* Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure.
*/
int main(int argc, char *argv[])
{
	FILE *file;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return EXIT_FAILURE;
	}

	if (!(file = fopen(argv[1], "r")))
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		return EXIT_FAILURE;
	}

	process_file(file, &stack);

	fclose(file);

	return EXIT_SUCCESS;
}
