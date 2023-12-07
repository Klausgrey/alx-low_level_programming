#include "lists.h"

/**
 * add_dnodeint -
 * @head:
 * @n:
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	(*head)->prev = newNode;
	*head = newNode;
	return (*head);
}