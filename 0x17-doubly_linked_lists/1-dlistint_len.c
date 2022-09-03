#include "lists.h"
/**
 * dlistint_len - determines the number of element in a dlistint_t list.
 * @h: pointer to head of the list.
 * Return: the amount of element in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
