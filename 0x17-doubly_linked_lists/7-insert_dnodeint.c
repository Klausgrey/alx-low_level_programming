#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: start of node
 * @idx: index to add node
 * @n: new elemnt
 * )
 * Return: new node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *former = NULL, *current = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if ((*h == NULL) && (idx != 0))
		return (NULL);
	if ((*h == NULL) && (idx == 0))
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	for (i = 0; current; i++)
	{
		if (i == idx)
		{
			new->next = current;
			new->prev = former;
			current->prev = new;
			if (former != NULL)
				former->next = new;
			else
				*h = new;
			return (new);
		}
		former = current;
		current = current->next;
	}
	if (i == idx)
	{
		new->next = NULL;
		new->prev = former;
		former->next = new;
		return (new);
	}
	return (NULL);
}
