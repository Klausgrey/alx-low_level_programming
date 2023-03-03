#include "main.h"

/**
 * string_toupper - mainfunction
 * @str: parameters
 * Return: always void
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= "a" && str[index] <= "z")
			str[index] = str[index] - 32;
			index++;
	}
			return (str);
}
