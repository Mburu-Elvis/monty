#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: the stack
 * @line_number: the monty file line number
 */

void add(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (*stack == NULL || ((*stack)->prev == NULL && (*stack)->next == NULL))
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->n + (*stack)->prev->n;
	(*stack)->prev->n = sum;
	pop(stack, line_number);
}
