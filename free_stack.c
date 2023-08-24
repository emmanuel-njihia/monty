#include "monty.h"

/**
 * exit_function - memory freed and errror handles then exit
 * @err_num: err message num
 *
 * Return: void
 */

void exit_function(unsigned int err_num)

{
	char *p[] = {"swap", "add", "sub", "div", "mul", "mod"};

	int ln = element->line_number;

	if (err_num == 1)
		fprintf(stderr, "Error: can't open file %s\n", element->fname);
	if (err_num == 2)
		fprintf(stderr, "L%d: unknown instruction %s\n", ln, element->tokened[0]);
	if (err_num == 3)
		fprintf(stderr, "Error: malloc failed\n");
	if (err_num == 4)
		fprintf(stderr, "L%d: usage: push integer\n", ln);
	if (err_num == 5)
		fprintf(stderr, "L%d: can't pint, stack empty\n", ln);
	if (err_num == 6)
		fprintf(stderr, "L%d: can't pop an empty stack\n", ln);
	if (err_num == 7 && err_num <= 12)
		fprintf(stderr, "L%d: can't %s, stack too short\n", ln, p[err_num - 7]);
	if (err_num == 13)
		fprintf(stderr, "L%d: div by zer\n", ln);
	if (err_num == 14)
		fprintf(stderr, "L%d: can't pchar, value out of range\n", ln);
	if (err_num == 15)
		fprintf(stderr, "L%d: can't pchar, stack empty\n", ln);
	if (err_num == 16)
		fprintf(stderr, "USAGE: monty file\n");

	free_buffer();
	free_list(element->head);
	free_token();
	if (element->fp != NULL)
		fclose(element->fp);
	exit(EXIT_FAILURE);
}

/**
 * free_list - stack_t list freed
 * @head: list head freed
 *
 * Return: void
 */

void free_list(stack_t *head)

{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);
		free(head);
	}
}

/**
 * free_buffer - getline buff free
 * Return: void
 */

void free_buffer(void)

{
	if (element->tokened != NULL)
	{
		if (element->tokened[0] != NULL)
			free(element->tokened[0]);
		if (element->tokened[1] != NULL)
			free(element->tokened[1]);
		free(element->tokened);
	}
	element->tokened = NULL;
}
