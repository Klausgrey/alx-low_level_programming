#include "lists.h"

/**
 * free_dlistint - frees a double linked list
 * @head: the first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	if (head == NULL)
	{
		printf("Freed !\n");
		exit(0);
	}
	while (current)
	{
		current = current->next;
		free(head);
		head = current;
	}
}
