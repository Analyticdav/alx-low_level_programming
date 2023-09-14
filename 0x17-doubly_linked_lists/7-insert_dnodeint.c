#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 * @h: A pointer to a pointer to the head of the doubly-linked list.
 * @idx: The index at which to insert
 * @n: The data value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current_node;
unsigned int i;

if (h == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
if (idx == 0)
{
if (*h != NULL)
{
new_node->next = *h;
(*h)->prev = new_node;
}
*h = new_node;
return (new_node);
}
current_node = *h;
for (i = 0; i < idx - 1 && current_node != NULL; i++)
current_node = current_node->next;
if (current_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = current_node->next;
new_node->prev = current_node;
if (current_node->next != NULL)
current_node->next->prev = new_node;
current_node->next = new_node;
return (new_node);
}
