#include "monty.h"
/**
 * push -  is a function that push elements into the stack
 * @stack:stack wheree to push the element
 * @count:tye number of lines
 */
void push(stack_t **stack, unsigned int count)
{
	char *n = global.argument;

	if ((is_digit(n)) == 0)
	{
		fprint(stderr, "L%d: usage : push integer\n", count);
		exit(EXIT_FAILURE);
	}
	if (global.data_struct == 1)
	{
		if (!add_node(custom_stack, atoi(global.argument)))
		{
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (!queue_node(custom_stack, atoi(global.argument)))
		{
			exit(EXIT_FAILURE);
		}
	}
}
