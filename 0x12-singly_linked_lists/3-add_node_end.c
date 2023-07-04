#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node to the end
 * @head: pointer to the list
 * @str: string to be add to the node
 * Return: address of thr new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int c = 0;

	while (str[c])
	c++;

		new_node = (list_t *)malloc(sizeof(list_t)); /* typecasting is fun */
		if (!new_node)
		return (NULL);
		new_node->str = strdup(str);
		new_node->len = c;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}
		while (temp->next)
		temp = temp->next;
		temp->next = new_node;


	return (new_node);

}
