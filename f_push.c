#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: top ptr stack
 * @line_number: executed number line command
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	char *temp;
	int is_negative = 0;
	int is_all_digits = 1;
	int i = 0;
	
	stack_t *newnode = add_stack_init();
	if (newnode == NULL)
		exit_function(3);
	temp = element->tokened[1];
	if (temp != NULL)
	{
		if (temp[i] == '-')
		{
			is_negative = 1;
			i++;
		}
		while (temp[i] != '\0')
		{
			if (!isdigit(temp[i]))
			{
				is_all_digits = 0;
				break;
			}
			i++;
		}
		if (is_all_digits)
		{
			int value = atoi(temp + is_negative);
			newnode->n = is_negative ? -value : value;
			return;
		}
