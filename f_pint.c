#include "monty.h"

/**
 * pint - prints what is in the top of the stack
 * @stack:where to retrieve the top element
 * @line_number:number of line
 */

void pint(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	if (element->head == NULL)
		exit_function(5);
	printf("%d\n", element->head->n);
}
