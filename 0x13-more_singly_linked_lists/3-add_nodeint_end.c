#include "lists.h"

/**
* add_nodeint_end - Adds a node to the end of listint_t list.
* @head: Pointer to the head of the list.
* @n: Integer value to be added to the new node.
* Return: The new element(success), or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *previous_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		previous_node = *head;

		while (previous_node->next != NULL)
		{
		previous_node = previous_node->next;
		}
		previous_node->next = new_node;
	}

	return (new_node);
}

