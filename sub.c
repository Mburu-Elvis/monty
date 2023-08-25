#include "monty.h"

/**
 * sub - subtracts the top element of the stack from the second
 * @stack: the stack
 * @line_number: the monty file line number
 */

void sub(stack_t **stack, unsigned int line_number)
{
	int dif;

	if (*stack == NULL || ((*stack)->prev == NULL && (*stack)->next == NULL))
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	dif = (*stack)->prev->n - (*stack)->n;
	(*stack)->prev->n = dif;
	pop(stack, line_number);
}
