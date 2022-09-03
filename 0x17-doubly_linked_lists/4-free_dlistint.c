#include "lists.h"
/**
 * free_dlistint - free used memory for dlistint_t list.
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new_head;

	while (head)
	{
		new_head = head->next;
		free(head);
		head = new_head;
	}
}
