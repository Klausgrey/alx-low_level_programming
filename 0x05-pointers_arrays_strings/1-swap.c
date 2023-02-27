#include <stdio.h>

/**
 * swap_int - main function
 * @a: parameter
 * @b: parameter
 * Return: always 0
 */

void swap_int(int *a, int *b)
/* the function that swaps the two intergers */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
