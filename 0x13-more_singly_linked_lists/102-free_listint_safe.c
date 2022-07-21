#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the pointer of the list.
 *
 * Description: it frees both safe and unsafe list,
 * (i.e. lists without and with loops.).
 * Return: size of the loop that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	long int diff;
	listint_t *temp;

	while (*h)
	{
		diff = *h - (*h)->next;

		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;
	return (count);
}
