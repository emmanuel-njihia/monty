#include "monty.h"
/**
 * pop - is a function that removes the top element of the stack
 * @stack: its a pointer to the top of the stack
 * @count : line count
 */
void pop(stack_t **stack, unsigned int count)
{
	stack_t *temp = NULL;

	if (!stack || !*stack)
	{
		fprint(stderr, "L%u: can't pop an empty stack\n", count);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;
	if (!*stack)
		return;
	(*stack)->prev = NULL;
}
