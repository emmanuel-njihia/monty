#include "monty.h"

/**
 * pop - is a function that removes the top element of the stack
 * @stack: its a pointer to the top of the stack
 * @line_number : line count
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *traverse;

	(void) stack;
	(void) line_number;

	if (element->head == NULL)
		exit_function(6);
	traverse = element->head->next;
	if (traverse != NULL)
		traverse->prev = NULL;
	free(element->head);
	element->head = traverse;
}
