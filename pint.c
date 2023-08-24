#include "monty.h"

/**
 * pint - function to print the top of the stack
 * @stack: the stack to consider
 * @line_number: the line_number of the command
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
