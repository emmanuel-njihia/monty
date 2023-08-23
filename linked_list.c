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
 * queue_node - node added to stack_t in mode queue
 * @custom_stack: head stack
 * @n: number node
 *
 * Return: new created node or NULL if allocated memory fails
 */

stack_t *queue_node(stack_t **custom_stack, const int n)

{
	stack_t *new = malloc(sizeof(stack_t));
	stack_t *current = *custom_stack;

	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	if (!custom_stack)
	{
		new->next = NULL;
		new->prev = NULL;
		*custom_stack = new;
		return (new);
	}

	while (current)
	{
		if (!current->next)
		{
			new->next = NULL;
			new->prev = current;
			current->next = new;
			break;
		}
		current = current->next;

	}

	return (new);
}

/**
 * add_node - start node added to stack_t stack
 * @custom_stack - head stack
 * @n: number of new node
 *
 * Return: node created newly, or NULL if creation fails
 */

stack_t *add_node(stack_t **custom_stack, const int n)

{
	stack_t *new = malloc(sizeof(stack_t));

	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new);
		return (NULL);
	}

	new->n = n;

	new->next = *custom_stack;
	new->prev = NULL;
	if (*custom_stack)
		(*custom_stack)->prev = new;
	*custom_stack = new;

	return (new);
}
