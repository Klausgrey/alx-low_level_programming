#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - a function that allocates (a head) memory using malloc
* @b: size if the int to be allocated.
* Return: the pointer.
*/

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(sizeof(b));
if (ptr == NULL)
exit(98);
return (ptr);
}
