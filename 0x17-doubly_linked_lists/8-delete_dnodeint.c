
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: A pointer to a pointer
 * @index: The index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current_node, *temp_node;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);
current_node = *head;
if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current_node);
return (1);
}
for (i = 0; i < index && current_node != NULL; i++)
current_node = current_node->next;
if (current_node == NULL)
return (-1);
temp_node = current_node->prev;
temp_node->next = current_node->next;
if (current_node->next != NULL)
current_node->next->prev = temp_node;
free(current_node);
return (1);
}
