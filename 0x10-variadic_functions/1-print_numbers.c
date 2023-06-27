#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_numbers - print numbers followed by new line
  *@separator: separator
  *@n: number of integers to print
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if ((separator != NULL) && (i != (n - 1)))
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}
