#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to a pointer of the head of the list.
 *
 * Return: The freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count;

	count = 0;

	if (h == NULL)
		return (0);

	current = *h;

	while (current)
	{
		count++;
		next = current->next;

		free(current);
		current = next;

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (count);
}
