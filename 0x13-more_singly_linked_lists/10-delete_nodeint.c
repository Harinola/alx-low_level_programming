#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at index
 * of a listint_t linked list.
 * @head: pointer to the pointer of the list.
 * @index: index of the node to delete.
 *
 * Return: 1(Success), or -1(Failure).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *present_node = NULL;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	present_node = temp->next;
	temp->next = present_node->next;
	free(present_node);

	return (1);
}
