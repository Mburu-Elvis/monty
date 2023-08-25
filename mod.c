#include "monty.h"

/**
 * my_mod - calculates modulas
 * @stack: the stack
 * @line_number: the monty file line number
 */

void my_mod(stack_t **stack, unsigned int line_number)
{
	int num;

	if (*stack == NULL || ((*stack)->prev == NULL && (*stack)->next == NULL))
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero", line_number);
		exit(EXIT_FAILURE);
	}
	num = ((*stack)->prev->n % (*stack)->n);
	(*stack)->prev->n = num;
	pop(stack, line_number);
}
