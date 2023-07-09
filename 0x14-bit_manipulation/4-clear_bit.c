#include "main.h"

/**
 * clear_bit - Sets the value of a specific bit to 0.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to clear.
 *
 * Return: 1 if the operation is successful, -1 if the index is invalid.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index > 63)
        return (-1);

    *n = (~(1UL << index) & *n);
    return (1);
}
