#include "monty.h"
/**
 * exit_function - handles errors in this program
 * @err_num : number corresponding to the the error
 */
void exit_function(unsigned int err_num)
{
	char *s[] = {"swap", "add", "sub", "div", "mul", "mod"};
	int ln = element->line_number;

	switch (err_num)
	{
		case 1:
			fprintf(stderr, "Error: Can't open file %s\n", element->fname);
			break;
		case 2:
			fprintf(stderr, "L%d: unknown instruction %s\n", ln, element->tokened[0]);
			break;
		case 3:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case 4:
			fprintf(stderr, "L%d: usage: push integer\n", ln);
			break;
		case 5:
			fprintf(stderr, "L%d: can't pint, stack empty\n", ln);
			break;
		case 6:
			fprintf(stderr, "L%d: can't pop an empty stack\n", ln);
			break;
		case 13:
			fprintf(stderr, "L%d: division by zero\n", ln);
			break;
		case 16:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		default:
			if (err_num >= 7 && err_num <= 12)
				fprintf(stderr, "L%d: can't %s, stack too short\n", ln, s[err_num - 7]);
			break;
	}
	free_buffer();
	free_list(element->head);
	free_token();
	if (element->fp != NULL)
		fclose(element->fp);
	exit(EXIT_FAILURE);
}
