#include "lists.h"
/**
 * sum_dlistint - Sums all the data in the list.
 * @head: pointer to head of the list.
 * Return: sum of all data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
