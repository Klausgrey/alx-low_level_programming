#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int ind, value = 0;
	unsigned long int current;

	for (ind = 63; ind >= 0; ind--)
	{
		current = n >> ind;

		if (current & 1)
		{
			_putchar('1');
			value++;
		}
		else if (value)
			_putchar('0');
	}
	if (!value)
		_putchar('0');
}
