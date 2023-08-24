#include "monty.h"

/**
 * pall - function to print all the elements in a stack
 * @stack: the stack whose elements are to be printed
 *
 * Return: nothing
 */
void pall(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *temp = *stack;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
