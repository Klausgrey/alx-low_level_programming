#include "lists.h"
#include <stdio.h>

/**
 * list_len -  number of elements
 * @h: pointer to the head
 * Returns: the number of elements
*/

size_t list_len(const list_t *h)

{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
	   h = h->next;
	}
	return (c);
}