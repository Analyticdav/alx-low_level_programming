#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *temporary_pointer;

	while (head)
	{
		temporary_pointer = head;
		head = head->next;
		free(temporary_pointer);
	}
}

