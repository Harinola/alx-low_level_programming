#include "lists.h"
/**
 * sum_listint - computes the sum of all the data(n) of  given listitnt_t liost
 * @head: pointer to the given listint_t list.
 *
 * Return: ssum of all the data(n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
