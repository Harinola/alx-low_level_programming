#include "lists.h"
/**
 * list_len - checks the number of elements in a linked list_t list.
 * @h: pointer to given list of type list_t.
 *
 * Return: Number of nodes.
 */
size_t list_len(const list_t *h)
{
	unsigned int cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}

	return (cnt);
}
