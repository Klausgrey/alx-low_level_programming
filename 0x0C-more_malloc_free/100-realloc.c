#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the old memeory location
 * @old_size: old size if the memory
 * @new_size: new size of the memory
 * Return: pointer to the newly all;cated memeory,
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *new_loc;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
	return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	new_loc = malloc(new_size);
	if (ptr == NULL)
		return (NULL);
	new_ptr = ptr;
	if (old_size > new_size)
		{
	for (i = 0; i < old_size; i++)
		new_loc[i] = new_ptr[i];
		}
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
			new_loc[i] = new_ptr[i];
	}
	free(ptr);
	return (new_loc);
}
