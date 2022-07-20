#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: pointer to the pointer of the given list.
 *
 * Return: The head nodes data(n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !(*head))
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
