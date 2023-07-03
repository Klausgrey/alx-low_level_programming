#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the values in a structure
 * @h: pointer to the node.
 * Return: number if nodes
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n++);
}
