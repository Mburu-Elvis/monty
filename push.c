#include "monty.h"

/**
 * push - function to push a pointer to a stack
 * @stack: the stack to push into
 * @line_number: the line number in monty
 *
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_number, int data)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (new != NULL)
	{
		new->n = data;
		new->prev = NULL;
		new->next = NULL;
	}
	if (*stack == NULL)
		*stack = new;
	else
	{
		(*stack)->next = new;
		new->prev = *stack;
	}
}
