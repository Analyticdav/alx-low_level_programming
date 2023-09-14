#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements in dlinked_list
 * @h: head of the list
 * Return: count of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
