#include "monty.h"
#include <string.h>
/**
  * get_tokens - tokenizes a line into separate strings
  * @buf: the buffer containing the line of strings
  * Return: void
  */
void get_tokens(char *buf)
{
	char *token;
	char *delim;
	int i;

	element->tokened[0] = NULL;
	element->tokened[1] = NULL;
	delim = " '\n'";
	token = strtok(buf, delim);
	for (i = 0; token != NULL && i < 2; i++)
	{
		element->tokened[i] = strdup(token);
		if (element->tokened[i] == NULL)
			exit_function(3);
		token = strtok(NULL, delim);
	}
}
