#include <stdio.h>
/**
 * _puts - main function
 * @str: parameter
 * Return: always 0
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
