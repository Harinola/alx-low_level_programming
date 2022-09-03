#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given index.
 * @h: pointer to head of string.
 * @n: element of new node.
 * @idx: index to insert new node.
 * Return: Pointer to the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
	}

	if (!temp->next)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
