#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t list.
 * @head: pointer to the given listint_t list.
 * @index: index of the required node, starting at 0.
 *
 * Return: Address to the nth node in the list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	listint_t *temp = head;
	unsigned int count = 0;

	while (temp)
	{
		count++;
		temp = temp->next;
	}

	if (index >= count)
		return (NULL);

	while (index + 1)
	{
		node = head;
		head = head->next;
		index--;
	}

	return (node);
}
