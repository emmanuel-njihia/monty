#include "monty.h"

/**
 * pint - prints what is in the top of the stack
 * @stack:where to retrieve the top element
 * @line_count:number of line
 */

void pint(stack_t **stack, unsigned int line_count)

{
	if (!stack || !(stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_count);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
