#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: pointer to head of the list
 * @index: index of the node
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;
	dlistint_t *tmp;

	node = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == node)
	return (tmp);
	node++;
	tmp = tmp->next;
	}
	return (NULL);
}
