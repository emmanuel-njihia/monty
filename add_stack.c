#include "monty.h"
/**
 * add_stack_init - adds a node at the beginning of the stack
 * Return: returns the addrss of the new node if successfull
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
 * add_stack_end - adds an element to the end of the stack
 * Return: adress of the new node if successfull
 */
stack_t *add_stack_end(void)
{
	stack_t *newnode = NULL;
	stack_t *head = element->head;
	stack_t *traverse;

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
		return (NULL);
	if (head == NULL)
	{
		free(newnode);
		newnode = add_stack_init();
	}
	else
	{
		traverse = head;
		while (traverse->next != NULL)
			traverse = traverse->next;
		newnode->next = NULL;
		newnode->prev = traverse;
		traverse->next = newnode;
	}
	return (newnode);
}
