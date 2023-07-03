#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds  new node to the existionh node.
 * @head: doulble pointer that helps modify the node.
 * @str: string to be added to the first node
 * Return: the address of the new node.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i = 0;

	while (str[i])
	i++;
	{
		new_node = (list_t *)malloc(sizeof(list_t)); /* typecasting is fun lol */
		if (!new_node)
		{
			return (NULL);
		}
		else /** if (new_node->str == NULL)
			*{
				* free(new_node);
				* return (NULL);
			*}
			*/
		new_node->str = strdup(str);
		new_node->len = i;
		new_node->next = (*head);
		(*head) = new_node;

	}
	return (new_node);
}
