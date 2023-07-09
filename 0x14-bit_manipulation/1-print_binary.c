#include "main.h"

/**
 * Prints the binary representation of a decimal number.
 * @param n: The number to print in binary.
 */
void print_binary(unsigned long int number)
{
	const int num_bits = sizeof(number) * 8;
	int bit_position = num_bits - 1;
	int has_printed_bit = 0;

	unsigned long int mask;
	int bit_value;

	while (bit_position >= 0)
	{
		mask = 1UL << bit_position;
		bit_value = (number & mask) ? 1 : 0;

		if (bit_value)
		{
			_putchar('1');
			has_printed_bit = 1;
		} else if (has_printed_bit)
		{
			_putchar('0');
		}

		bit_position--;
	}

	if (!has_printed_bit) {
		_putchar('0');
	}
}
