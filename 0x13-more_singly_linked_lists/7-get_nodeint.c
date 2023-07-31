#include "lists.h"

/**
 * get_nodeint_at_index - Returns index
 * @head: Pointer to the head of the list.
 * @index: Index of the node from zero 0.
 *
 * Return: The nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
