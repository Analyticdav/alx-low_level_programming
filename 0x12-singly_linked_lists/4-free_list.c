#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - Frees list_t list.
 * @head: A pointer
 */
void free_list(list_t *head)
{
list_t *temporary;

	while (head != NULL)
	{
	temporary = head;
	head = head->next;
	free(temporary->str);
	free(temporary);
	}	
}
