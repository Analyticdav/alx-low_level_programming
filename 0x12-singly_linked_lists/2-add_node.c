#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - the function for length of string
 * @s: The string character
 * Return: Duplicate of k
 */

int _strlen(const char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
	k++;
	}
	return (k);
}
/**
* add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
	return (NULL);

	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = *head;
	*head = add;
	return (add);
}
