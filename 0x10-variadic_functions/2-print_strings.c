#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_strings - prints strings then new line
  *@separator: separator
  *@n: number of strings
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *c;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(str, char *);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if ((separator != NULL) && (i != (n - 1)))
			printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}
