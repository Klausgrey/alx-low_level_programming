#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: size of the array
 *
 * Return:  a pointer to the newly created hash table || NULL
 */

 hash_table_t *hash_table_create(unsigned long int size)
 {
	 hash_table_t *new_head = NULL;

	 if (size == 0)
		 return (NULL);
	 new_head = malloc(sizeof(hash_table_t));
	 if (new_head == NULL)
		 return (NULL);

	new_head->size = size;
	new_head->array = calloc((size_t)size, sizeof(hash_node_t *));

	if(new_head == NULL)
		return (NULL);

	return (new_head);
 }