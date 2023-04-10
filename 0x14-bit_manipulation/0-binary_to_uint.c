#include "main.h"
/**
* binary_to_uint - function that converts binary to decimal (unit).
* @b: pointers that points to the string.
* Return: returns the value.
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int va_lue = 0;
int z;

if (!b)
return (0);

for (z = 0; b[z]; z++)
{
if (b[z] < '0' ||  b[z] > '1')
return (0);
va_lue = 2 * va_lue + (b[z] - '0');
}
return (va_lue);
}
