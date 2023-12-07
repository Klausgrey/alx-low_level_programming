#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: first node
 * @index: index to delete node
 * )
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *former = NULL, *current = *head;

	if (*head == NULL)
		return (-1);
	while (current)
	{
		if (i == index)
		{
			if (current->next != NULL)
				(current->next)->prev = former;
			if (former != NULL)
				former->next = current->next;
			else
				*head = current->next;
			free(current);
			return (1);
		}
		i++;
		former = current;
		current = current->next;
	}
	return (-1);
}
