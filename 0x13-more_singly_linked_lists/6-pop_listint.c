#include "lists.h"

/**
* pop_listint - Deletes the headnode of a linked list.
* @head: Pointerthe head of the list.
*
* Return: input
*/
int pop_listint(listint_t **head)
{
	int input = 0;
	listint_t *temporary_pointer;

	if (*head != NULL)
	{
		temporary_pointer = *head;
		input = temporary_pointer->n;
		*head = (*head)->next;
		free(temporary_pointer);
	}

	return (input);
}
