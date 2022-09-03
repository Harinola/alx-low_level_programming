#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at a given index.
 * @head: pointer to head of list.
 * @idx: index to delete node.
 * Return: 1(Success), -1(Failure).
 */
dlistint_t delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *temp = *head;
	unsigned int counter = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (!temp->next)
			return (-1);
		temp->next->prev = NULL;
		free(temp);
		return (1)
	}

	while (counter < index)
	{
		if (!temp->next)
			return (-1);
		temp = temp->next;
		counter++;
	}
	temp->prev->next = temp->next;
	if (!temp->next)
	{
		node = temp->prev;
		node->next = NULL;
		free(temp);
		return (1);
	}

	free(temp);
	return (1);
}
