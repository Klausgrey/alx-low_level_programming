#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string to be converted
 * Return: converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int ind = 0;
	unsigned int value = 0;

	if (!b)
	return (0);

	for (ind = 0; b[ind]; ind++)
	{
		if (b[ind] < '0' || b[ind] > '1')
			return (0);
		value = 2 * value + (b[ind] - '0');
	}
	return (value);
}
