#include "monty.h"

/**
 * pchar - char on stack top printed, on newline
 * @stack: double pointer of list beginning of list (NULL)
 * @line_number: file line (always passed 0)
 * Return: nothing, void
 */

void pchar(stack_t **stack, unsigned int line_number)

{
	(void) stack;
	(void) line_number;

	if (element->head == NULL)
		exit_function(15);
	if (element->head->n < 0 || element->head->n > 127)
		exit_function(14);
	putchar(element->head->n);
	putchar('\n');
}

/**
 * pstr - stack top of string printed
 * @stack: beginning of list (NULL) of pointer double
 * @line_count: file line (always passed 0)
 *
 * Return: nothing, void
 */

void pstr(stack_t **stack, unsigned int line_number)

{
	stack_t *transverse;

	(void) stack;
	(void) line_number;
	transverse = element->head;
	while (transverse != NULL)
	{
		if (transverse->n < 1 || transverse->n > 127)
			break;
		putchar(transverse->n);
		transverse = transverse->next;
	}
	putchar('\n');
}

/**
 * rot1 - top stack rotates
 * @stack: top stack ptr
 * @line_number: number command line executed
 *
 * Return: void
 */

void rotl(stack_t **stack, unsigned int line_number)

{
	stack_t *end = element->head, *head = element->head;

	(void) stack;
	(void) line_number;
	if (end && end->next)
	{
		while (end->next)
			end = end->next;
		element->head = head->next;
		head->prev = end;
		head->next = NULL;
		end->next = head;
		element->head->prev = NULL;
	}
}

/**
 * rotr - bottom stack rotates
 * @str: top stack ptr
 * @line_number: command line number executed
 * Return: void
 */

void rotr(stack_t **stack, unsigned int line_number)

{
	stack_t *end = element->head, *head = element->head;

	(void) stack;
	(void) line_number;
	if (end && end->next)
	{
		while (end->next)
			end = end->next;
		end->prev->next = NULL;
		head->prev = end;
		end->next = head;
		end->prev = NULL;
		element->head = end;
	}
}
