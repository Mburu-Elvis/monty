#include "monty.h"

/**
 * exec_command - executes an operation on the stack
 * @opcode: character pointer of command to operate
 * @stack: the stack on which the operation is carried upon
 * @line_number: the line number from which the operation is called
 *
 * Return: void
 */
void exec_command(char *opcode, stack_t **stack, unsigned int line_number)
{
	unsigned int i = 0;
	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall}
	};

	for (; i < sizeof(opcodes) / sizeof(opcodes[0]); i++)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
		{
			opcodes[i].f(stack, line_number);
			break;
		}
	}
}
