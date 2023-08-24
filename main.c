#include <stdio.h>
#include "monty.h"

/**
 * main - the main entry point of the program
 * @argc: number of arguments passed to the function
 * @argv: array of string pointer of instructions
 *
 * Return: ALWAYS EXIT_SUCCESS
 */
int main(int argc, char **argv)
{
	FILE *fd = fopen(argv[1], "r");
	char line[50];
	char *opcode = NULL, *temp;
	stack_t *stack = NULL, *stack_temp;
	unsigned int line_number = 0;

	if (argc != 2)
		return (EXIT_FAILURE);
	while (fgets(line, sizeof(line), fd) != NULL)
	{
		opcode = strtok(line, " \r\n");
		temp = strtok(NULL, " \r\n");
		if (temp != NULL)
			number = atoi(temp);
		exec_command(opcode, &stack, line_number);
		line_number++;
	}
	fclose(fd);
	while (stack != NULL)
	{
		stack_temp = stack;
		stack = stack->prev;
		free(stack_temp);
	}
	return (EXIT_SUCCESS);
}
