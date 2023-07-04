#include "lists.h"

/**
 * free_list - fress the allocated memory space
 * @head: pointer to..
 * Returns nothing.
*/

void free_list(list_t *head)
{
	list_t *tmp;

	do {
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	} while (head != NULL);
}
