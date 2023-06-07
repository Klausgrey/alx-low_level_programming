
#include "main.h"
/**
 * _pow_recursion - power of a number
 * @x: parameter used
 * @y: parameter used
 * Return: 0 is ture
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
