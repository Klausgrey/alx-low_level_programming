#include "main.h"

/**
 * leet - mainfunction
 * @str: parameter
 * Return: str
 */

char *leet(char *str)
{
	int i, j;
	char *alpha = "aAeEoOtTlL";
	char *symbol = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = symbol[j];
			}
		}
	}
	return (str);
}
