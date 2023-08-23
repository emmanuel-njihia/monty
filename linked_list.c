#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * print_stack - contents of stack_t stack printed
 * @custom_stack: head stack
 *
 * Return: number of elements
 */

size_t print_stack(const stack_t *custom_stack)

{
	size_t p = 0;

	while (custom_stack)
	{
		printf("%d\n", custom_stack->n);
		custom_stack = custom_stack->next;
		p++;
	}

	return (p);
}

/**
 * free_stack - frees dlistint_t linked list
 * @custom_stack: head list
 *
 * Return: nothing
 */

void free_stack(stack_t *custom_stack)

{
	stck_t *current = custom_stack;
	stack_t *next;

	if (custom_stack)
	{
		next = custom_stack->next;
		while (current)
		{
			free(current);
			current = next;
			if (next)
				next = next->next;
		}
	}
}

/**
 * que
