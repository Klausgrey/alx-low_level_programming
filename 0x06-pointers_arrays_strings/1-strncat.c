#include "main.h"

/**
 * _strncat - main function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * i@: parmeter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int destlen = 0;

	while (dest[index++])
		destlen++;
	for (index = 0 ; src[index] && index < n ; index++)
		dest[destlen++] = src[index];
	return (dest);
}
