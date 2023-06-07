#include "main.h"
/**
 *_strlen_recursion - lenght of s string
 * @s: points to the string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
	lenght++;
	lenght += _strlen_recursion(s + 1);
	}
	return (lenght);
}
