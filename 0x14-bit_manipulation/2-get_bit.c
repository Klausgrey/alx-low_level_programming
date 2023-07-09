#include "main.h"

/**
 * get_bit - Retrieves the value of a specific bit at a given index.
 * @n: The decimal number to search.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the specified index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
	return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
