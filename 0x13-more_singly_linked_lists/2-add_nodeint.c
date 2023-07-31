#include "lists.h"

/**
 * add_nodeint - Thiss adds a new_node to a list
 * @head: Pointer to the head of the list.
 * @n: Integer value to be added to the new_node.
 * Return: new_node(success) else return NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
