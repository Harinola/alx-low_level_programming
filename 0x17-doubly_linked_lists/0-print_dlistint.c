#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;

	while (h)
	{
		printf("%d", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
