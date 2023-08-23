#include "monty.h"

/**
 * add - top two elements added
 * @stack: top stack ptr
 * @line_number: command number line executed
 *
 * Return: void
 */

void add(stack_t **stack, unsigned int line_number)

{
	(void) stack;
	(void) line_number;

	if (element->head != NULL && element->head->next != NULL)
	{
		element->head->next->n = element->head->n + element->head->n;
		pop(NULL, 0);
	}
	else
	{
		exit_function(8);
	}
}

/**
 * sub - top two elements subtracted
 * @stack: top stack ptr
 * @line_number:command number line executed
 *
 * Return: void
 */

void sub(stack_t **stack, unsigned int line_number)

{
	(void) stack;
	(void) line_number;

	if (element->head != NULL && element->head->next != NULL)
	{
		element->head->next->n = element->head->n - element->head->n;
		pop(NULL, 0);
	}
	else
	{
		exit_function(9);
	}
	}

/**
 * divide - top two elements divided
 * @stack: top stack ptr
 * @line_number: command number line execy=uted
 *
 * Return: void
 */

void divide(stack_t **stack, unsigned int line_number)

{
	(void) stack;
	(void) line_number;

	if (element->head != NULL && element->head->next != NULL)
	{
		if (element->head->n == 0)
			exit_function(13);
		element->head->next->n = element->head->n / element->head->n;
		pop(NULL, 0);
	}
	else
	{
		exit_function(10);
	}
}

/**
 * mul - top two elements multiplied
 * @stack: top stack ptr
 * @line_number: command line executed
 *
 * Return: void
 */

void mul(stack_t **stack, unsigned int line_number)

{
	(void) stack;
	(void) line_number;

	if (element->head != NULL && element->head->next != NULL)
	{
		element->head->next->n = element->head->n * element->head->n;
		pop(NULL, 0);
	}
	else
	{
		exit_function(11);
	}
}

/**
 * mod - computes rest of division of top second element
 * @stack: top stack ptr
 * @line_number: command line executed
 *
 * Return: void
 */

void mod(stack_t **stack, unsigned int line_number)

{
	(void) stack;
	(void) line_number;

	if (element->head != NULL && element->head->next->n != NULL)
	{
		if (element->head->n == 0)
			exit_function(13);
		element->head->next->n = element->head->n % element->head->n;
		pop(NULL, 0);
	}
	else
	{
		exit_function(12);
	}
}
