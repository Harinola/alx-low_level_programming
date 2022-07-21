#include "lists.h"
/**
 * print_listint_safe - prints a listint_t list safely.
 * @head: pointer to the start of the list.
 *
 * Description: a list is considered safe if any of it nodes
 *  doesn't points back into a previous node of the list.
 *  Return: number of (safe) nodes in the list.
 */
size_t print_listint_safe(listint_t *head)
{
	size_t node = 0;
	long int diff;

	while (head)
	{
		node++;
		printf("[%p] %d\n", (void *)head, head->n);
		diff = head - head->next;
		if (diff < 0)
		{
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		exit(98);
		}
		else
		{
			head = head->next;
		}
	}

	return (node);
}
