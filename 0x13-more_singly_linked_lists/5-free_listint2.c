#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list.
 * @head: pointer to the given list.
 *
 * Description: sets head to NULL after the list has been freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
