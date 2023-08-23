#include "monty.h"
/**
 * pint - prints what is in the top of the stack
 * @stack:where to retrieve the top element
 * @count:number of line
 */
void pint(stack_t **stack, unsigned in count)
{
	if (!stack || !(stack))
	{
		fprint(stderr, "L%d: can't pint, stack empty\n", count);
		exit(EXIT_FAILURE):
	}
	printf("%d\n", (*stack)->n);
}
