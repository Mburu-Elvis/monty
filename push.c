#include "monty.h"

/**
 * push - function to push a pointer to a stack
 * @stack: the stack to push into
 * @line_number: the line number in monty
 *
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *num = strtok(NULL, " \t\r\n");
	stack_t *new = malloc(sizeof(stack_t)), *temp  = *stack;

	if (new != NULL)
	{
		if (is_number(num) == 0)
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		number = atoi(num);
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
		fprintf(stderr, "Error: malloc failed\n");
		free(new);
		exit(EXIT_FAILURE);
	}
}

/**
 * is_number - checks for a number
 * @str: string to be checked
 * Return: 1 on Success else 0
 */
int is_number(const char *str)
{
	while (*str != '\0')
	{
		if (!isdigit(*str) && (*str != '-' && *str != '+'))
			return (0);
		str++;
	}
	return (1);
}
