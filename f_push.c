#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: top ptr stack
 * @line_number: executed number line command
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *newnode = NULL;
	int k = 0, m = 0, negative = 0;
	char *temp = element->tokened[1];

	(void) stack;
	(void) line_number;
	newnode = add_stack_at_start();
	if (newnode == NULL)
		exit_function(3);
	if (temp != NULL)
	{
		if (temp[0] == '-')
		{
			k++;
			m = 1;
			negative = 1;
		}
		while (temp[k] != '\0')
		{
			if (isdigit(temp[k]) == 0) /*0 if not digit*/
			{
				m = 1;
				break;
			}
			k++;
			m = 0;
		}
		if (m == 0)
		{
			if (negative == 1)
				temp = temp + 1;
			newnode->n = atoi(temp);
			if (negative == 1)
				newnode->n *= -1;
			return;
		}
	}
	exit_function(4);
}
