#include "monty.h"

/**
 * my_mul - multiplies the second top elements of the stack by the top
 * @stack: the stack
 * @line_number: the monty file line number
 */

void my_mul(stack_t **stack, unsigned int line_number)
{
	int num;

	if (*stack == NULL || ((*stack)->prev == NULL && (*stack)->next == NULL))
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = (*stack)->prev->n * (*stack)->n;
	(*stack)->prev->n = num;
	pop(stack, line_number);
}
