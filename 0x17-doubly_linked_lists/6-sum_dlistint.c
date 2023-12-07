#include "lists.h"

/**
 * sum_dlistint - sum all elements of linked list
 * @head: start of node
 * )
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (0);
	while (current)
	{
		i += current->n;
		current = current->next;
	}
	return (i);
}
