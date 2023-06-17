#include "main.h"
#include <stdlib.h>

/**
 * array_range -  function that creates an array of integers.
 * @min: size of minimum arry
 * @max: sixe of the maximum array
 * Return: pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int len, size = 0;

	if (min > max)
	{
	return (NULL);
	}

	len = min;
	while (len <= max)
	{
	size++;
	len++;
	}
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min++;
	return (ptr);
	free(ptr);
}
