#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Add list_t list.
 * @head: the head node.
 * @str: The string
 *
 * Return: Addredd of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *str_copy;
	size_t len = 0;


	while (str && str[len])
		len++;

	str_copy = strdup(str);
	if (str_copy == NULL)
		return (NULL);


	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(str_copy);
		return (NULL);
	}

	new_node->str = str_copy;
	new_node->next = NULL;


	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}


	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
