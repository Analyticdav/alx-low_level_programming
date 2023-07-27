#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H
/**
 * struct list_s - The singly linked list
 * @str: The string
 * len: The length of string
 * @next: A pointer to the next node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

void intro_message(void);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif

