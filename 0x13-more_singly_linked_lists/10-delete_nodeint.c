#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node.
 * @head: Pointer to a pointer of the head of the list.
 * @index: Index of the node.
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary_node, *previous_node = *head;
	unsigned int i;

	i = 0;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(previous_node);
		return (1);
	}

	for (; i < index; i++)
	{
		if (previous_node->next == NULL)
			return (-1);
		temporary_node = previous_node;
		previous_node = previous_node->next;
	}

	temporary_node->next = previous_node->next;
	free(previous_node);

	return (1);
}
