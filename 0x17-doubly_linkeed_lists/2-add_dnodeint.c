#include "lists.h"
/**
 * add_dnodeint - inserts a new node at the beginning of a dlistint_t list.
 * @head: pointer to the head of the list.
 * @n: element of the list.
 * Return: pointer to new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
