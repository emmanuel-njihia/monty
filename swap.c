#include "monty.h"

/**
 * swap - data swapped to previous position from top
 * @custom_stack: main file header given in stack
 * @linecount: line number
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
