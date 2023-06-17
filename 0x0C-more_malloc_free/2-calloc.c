#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: size of the array
 * @size: parameter
 * Return: pointer to malloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, size * nmemb);
	return (ptr);
}
