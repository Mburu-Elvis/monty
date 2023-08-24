#include "monty.h"

/**
 * pop - function to delete the last element
 * @stack: the stack to delete from
 * @line_number: the line number of the monty file
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = (*stack)->prev;
	free(temp);
}
