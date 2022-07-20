#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the pointer of the given listint_t list.
 * @idx: index of the listint_t list where the new node should be added,
 * starting at 0.
 * @n: the data(n) element of the new node.
 *
 * Return: pointer to the new node or NULL(Failure).
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
		{
			temp = temp->next;
		}
	}

	return (NULL);
}
