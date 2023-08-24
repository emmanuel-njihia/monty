#include "monty.h"

/**
 * opcode - manage builtins
 * @stack - stack
 * @str: string
 * @line_count: line numbers
 *
 * Return: nothing
 */

void opcode(stack_t **custom_stack, char *str, unsigned int line_count)

{
	int m = 0;

	instruction_t op[] =  INSTRUCTIONS;

	if (!strcmp(str, "stack"))
	{
		global.data_struct = 1;
		return;
	}

	if (!strcmp(str, "queue"))
	{
		global.data_struct = 0;
		return;
	}

	while (op[m].opcode)
	{
		if (strcmp(op[m].opcode, str) == 0)
		{
			op[m].f(custom_stack, line_count);
			return;
		}
		m++;
	}
	fprintf(stderr, "%L\d: unknown instruction %s\n" line_count, str);
	exit(EXIT_FAILURE);
}
