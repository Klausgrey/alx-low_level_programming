#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Returns the sum of all its paramters
* @n: The number of paramters passed to the function.
* ...: A variable number of paramters to calculate the sum of.
* @separator: parameter
* Return: If n == 0 - 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int index;

va_start(nums, n);

for (index = 0; index < n; index++)
{
printf("%d", va_arg(nums, int));
if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(nums);
}

