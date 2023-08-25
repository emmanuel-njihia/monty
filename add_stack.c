#include "monty.h"
/**
 * add_stack_end - adds an element to the end  of the stack
 * Return: address of a new node or NULL if failed
 */
stack_t *add_stack_end(void)
{
	stack_t *temp = NULL;
	stack_t *head = element->head;
	stack_t *traverse;

	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
		return (NULL);
	if (head == NULL)
	{
		free(temp);
		temp = add_stack_at_start();
	}
	else 
	{
		traverse = head;
		while (traverse->next != NULL)
			traverse = traverse->next;
		temp->next = NULL;
		temp->prev = traverse;
		traverse->next = temp;
	}
	return (temp);
}
/**
 * add_stack_at_start - adds a node a the beginning of a node
 * Return:address of the new node or NULL when it fails
 */
stack_t *add_stack_at_start(void)
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
