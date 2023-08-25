#include "monty.h"
/**
  * get_tokens - tokenizes a line into separate strings
  * @buf: the buffer containing the line of strings
  * Return: void
  */
void get_tokens(char *buf)
{
	char *token;
	char *delim;
	int k;

	element->tokened[0] = NULL;
	element->tokened[1] = NULL;
	delim = "'\n'";
	token = strtok(buf, delim);
	for (k = 0; token != NULL && k < 2; k++)
	{
		element->tokened[k] = strdup(token);
		if (element->tokened[k] == NULL)
			exit_function(3);
		token = strtok(NULL, delim);
	}
}
