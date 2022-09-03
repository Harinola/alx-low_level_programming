#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to head of the list.
 * @index: index of the node
 * Return: element at the nth index in the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		count++;
	}

	return (head);
}
