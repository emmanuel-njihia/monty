#include "monty.h"

/**
 * swap - data swapped to previous position from top
 * @stack: main file header given in stack
 * @line_number: line number
 * Return: void
 */

void swap(stack_t **stack, unsigned int line_number)

{
	int temp = 0;

	(void) stack;
	(void) line_number;
	if (element->head != NULL && element->head->next != NULL)
	{
		temp = element->head->n;
		element->head->n = element->head->next->n;
		element->head->next->n = temp;
	}
	else
	{
		exit_function(7);
	}
}

/**
 * nop - doesn't do anything
 * @stack: ptr to the top of the stack
 * @line_number : the line number of the command being executed
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
