#include "main.h"

/**
 * _strncpy - mainfunction
 * @dest: parameter
 * @src: paramter
 * @n: parameter
 * Return: Dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, srclen = 0;

	while (src[index++])
		srclen++;
	for (index = 0 ; src[index] && index < n ; index++)
		dest[index] = src[index];
	for (index = srclen ; index < n ; index++)
		dest[index] = '\0';
	return (dest);
}

