#include "main.h"

/**
 * _strchr - main funtion
 * @s: parameter
 * @c: parameter
 * Return: null
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
	if (s[index] == c)
	return (s + index);
	}
return ('\0');
}
