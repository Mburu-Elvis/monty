#include "monty.h"

/**
 * pall - function to print all the elements in a stack
 * @stack: the stack whose elements are to be printed
 *
 * Return: nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	while (*stack != NULL)
	{
		printf("%d\n", (*stack)->n);
		*stack = (*stack)->next;
	}
}
