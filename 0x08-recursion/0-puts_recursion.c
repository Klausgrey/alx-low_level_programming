#include "main.h"
/**
 * _puts_recursion - akin to puts function
 * @s: pointer to the string it prints
 * Return: always 0
 */

void _puts_recursion(char *s)

{
	if (*s)
	{
		_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

