#include <stdlib.h>
#include "lists.h"

/**
* list_len - length of elements in a linked list_t list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The count of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
	count++;
	h = h->next;
	}

	return (count);
}

