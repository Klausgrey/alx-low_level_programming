#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator- points each arrays
* @array: parameter
* @size: paramter
* @action: parameter
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))

{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
