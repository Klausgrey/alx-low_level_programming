#include "main.h"
/**
 * _print_rev_recursion - akin to puts function
 * @s: pointer to the string
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
