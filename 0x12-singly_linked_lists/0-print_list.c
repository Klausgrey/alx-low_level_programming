#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the element in the list structure
* @list_t: parameter
* @h: pointer pointing to a steuxture
* Return: int
*/

size_t print_list(const list_t *h)
{
size_t j = 0;

for (j = 0; h != NULL; j++)
{
if (h->str != NULL)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
h = h->next;
}
return (j++);
}
