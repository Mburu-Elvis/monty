#include <stdio.h>
#include "monty.h"

extern int number;
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
	stack_t **stack = malloc(sizeof(stack_t));
	unsigned int line_number = 0;

	if (argc != 2)
		return (EXIT_FAILURE);
	while(fgets(line, sizeof(line), fd) != NULL)
	{
		opcode = strtok(line, " ");
		temp = strtok(NULL, " ");
		if (temp != NULL)
			number = atoi(temp);
		exec_command(opcode, stack, line_number);
		line_number++;
	}	
	return (EXIT_SUCCESS);
}
