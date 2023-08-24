#include "monty.h"

/**
 * push - function to push a pointer to a stack
 * @stack: the stack to push into
 * @line_number: the line number in monty
 *
 * Return: nothing
 */
void push(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *new = malloc(sizeof(stack_t)), *temp  = *stack;

	if (new != NULL)
	{
		new->n = number;
		new->prev = NULL;
		new->next = NULL;
		if (temp == NULL)
			*stack = new;
		else
		{
			new->prev = temp;
			temp->next = new;
			*stack = new;
		}
	}
	else
	{
		free(new);
		exit(EXIT_FAILURE);
	}
}
