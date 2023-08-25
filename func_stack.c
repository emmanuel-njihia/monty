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
  * add_stack_end - add elemnt to stack end(FIFO, queue only)
  * Return:  new node address if fail NULL
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
		temp = add_stack_init();
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
