#include "monty.h"

/**
 * swap - function to swap the top two elements of the stack
 * @stack: the stack whose elements are to be swappped
 * @line_number: the line nuber of the command from monty file
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int n1, n2;

	if ((*stack)->prev == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	n1 = (*stack)->n;
	n2 = (*stack)->prev->n;
	(*stack)->n = n2;
	(*stack)->prev->n = n1;
}
