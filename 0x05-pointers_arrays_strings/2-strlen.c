#include <stdio.h>

/**
 * _strlen - main function
 * @str: parameter
 * Return: always 0
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
