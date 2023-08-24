#include "monty.h"

/**
 * add_stack_init - stack_t added at node beginning
 * Return: new node address or if fail NULL
 */

stack_t *add_stack_init(void)

{
	stack_t *temp = NULL;
	stack_t *head = element->head;

	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
		return (NULL);
	temp->next = (head == NULL) ? NULL : head;
	temp->prev = NULL;
	if (head)
		head->prev = temp;
	element->head = temp;
	return (temp);
}

/**
 * get_tokens - separate str tokenized
 * @buf: str line containing buf
 * Return: void
 */

void get_tokens(char *buf)

{
	char *token;
	char *delim;
	int o;

	element->tokened[0] = NULL;
	element->tokened[1] = NULL;
	delim = " '\n'";
	token = strtok(buf, delim);
	for (o = 0; token != NULL && o < 2; o++)
	{
		element->tokened[o] = strdup(token);
		if (element->tokened[o] == NULL)
			exit_function(3);
		token = strtok(NULL, delim);
	}
}

/**
 * add_stack_end - add elemnt to stack end(FIFO, queue only)
 * Return: new node address if fail NULL
 */

stack_t *add_stack_end(void)

{
	stack_t *temp = NULL;
	stack_t *head = element->head;
	stack_t *transverse;

	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
		return (NULL);
	if (head == NULL)
	{
		free(temp);
		temp = add_stack_init();
	}
	else
	{
		transverse = head;
		while (transverse->next != NULL)
			transverse = transverse->next;
		temp->next = NULL;
		temp->prev = transverse;
		transverse->next = temp;
	}
	return (temp);
}
