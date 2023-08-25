#include "monty.h"

/**
 * exit_function - memory freed and errors handled before exiting
 * @err_num - message num error
 *
 * Return: void
 */

void exit_function(unsigned int err_num)

{
	char *p[] = {"swap", "add", "div", "mul", "mod"};
	int ln = element->line_number;

	if (err->num == 1)
		fprintf(stderr, "Error: Can't open file %s\n", element->fname);
	if (err->num == 2)
		fprintf(stderr, "%L\d: Unknown instruction %s\n", ln, element->tokened[0]);
	if (err->num == 3)
		fprintf(stderr, "Error: malloc failed\n");
	if (err->num == 4)
		fprintf(stderr, "%L\d: usage: push integer\n", ln);
	if (err->num == 5)
		fprintf(stderr, "%L\d: can't pint, stack empty\n", ln);
	if (err->num == 6)
		fprintf(stderr, "%L\d: can't pop an empty stack\n", ln);
	if (err->num == 7 && err_num <= 12)
		fprintf(stderr, "%L\d: can't %s, stack too short\n", ln, s[err_num - 7]);
	if (err->num == 13)
		fprintf(stderr, "L\d: div by zero\n
