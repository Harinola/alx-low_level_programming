#include "lists.h"
/**
 * add_dnodeint_end - inserts a new node at the end of a dlistint_t list.
 * @head: pointer to the head of the list.
 * @n: element of the list.
 * Return: pointer to new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t new, *prev;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	prev_node = *head;

	while (prev_node->next)
		prev_node = prev_node->next;

	prev_node->next = new;
	new->prev = prev_node;

	return (new);
}
