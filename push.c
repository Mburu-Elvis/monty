#include "monty.h"

extern int number;
/*
 * push - function to push a pointer to a stack
 * @stack: the stack to push into
 * @line_number: the line number in monty
 *
 * Return: nothing
 */
void push(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (new != NULL)
	{
		new->n = number;
		new->prev = NULL;
		new->next = NULL;
	}
	if (*stack == NULL)
		*stack = new;
	else
	{
		(*stack)->next = new;
		new->prev = *stack;
		*stack = new->next;
	}
	free(new);
}
