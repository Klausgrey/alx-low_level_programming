#include "main.h"
/**
 * _islower - is the main function
 *
 * @c: parameter function
 *
 * Return: is 1 if it is a lower case, else it is 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
