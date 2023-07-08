#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string to be converted
 * Return: converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, ind = 0;
	unsigned int value = 0;

	if (!b)
	return (0);

	while (b[ind])
	ind++;
	while (ind)
	{
		if (b[ind - 1] != '0' && b[ind - 1] != '1')
		return (0);
		if (b[ind - 1] == '1')
		value += base;
		base *= 2;
		ind--;
	}
	return (value);
}
