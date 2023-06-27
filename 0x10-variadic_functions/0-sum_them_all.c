#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *sum_them_all - sums up all function parameters
  *@n: parameter
  *)
  *Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;

	va_start(ap, n);
	if (n == 0)
		return (0);
	j = 0;
	for (i = 0; i < n; i++)
		j += va_arg(ap, int);
	va_end(ap);
	return (j);
}
