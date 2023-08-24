#include "monty.h"
/**
 * pall - prints all the elements in the stack starting from top
 * @stack: ponter to the head of the stack
 * @line_number: the number of lines
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head = element->head;

	(void) stack;
	(void) line_number;
	if (head == NULL)
		return;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
