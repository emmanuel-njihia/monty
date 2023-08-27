#include "monty.h"

/**
 * *free_list - free a stack_t list
 * @head: head of lists to free
 * Return:void
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
 * free_buffer - free getline buffer
 */
void free_buffer(void)
{
	if (element->buf != NULL)
	{
		free(element->buf);
		element->buf = NULL;
	}
}

/**
 * free_token - frees malloc tokens
 */
void free_token(void)
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
