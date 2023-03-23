#include <stdio.h>
#include "function_pointers.h"

/**
* prints_name - prints name using the pointers
* @name: string to add
* @f: pointers to function
* Return: void
*/

void print_name(char *name, void (*f)(char *))

{
if (name == NULL || f == NULL)
return;
f(name);
}
