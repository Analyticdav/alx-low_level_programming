#include "lists.h"

/**
 * listint_len - outputs the number of elements in a list.
 * @h: Pointer to the head of the list.
 *
 * Return: Elements count.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements_count;
	const listint_t *current = h;

	elements_count = 0;
	while (current)
	{
	current = current->next;
	elements_count++;
	}
	return (elements_count);
}

