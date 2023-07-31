#include "lists.h"

/**
 * sum_listint - The function to sum list
 * @head: pointer to the head
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	int sum_list;
	listint_t *current = head;

	sum_list = 0;
	while (current)
	{
		sum_list += current->n;
		current = current->next;
	}

	return (sum_list);
}
