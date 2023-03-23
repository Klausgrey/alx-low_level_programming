#include <stdio.h>
#include "function_pointer.h"

/**
* main - prints
* @argc: parameter
* @argv: parameter
* Return: 0
*/

int main(int argc, chsr * argv[])
{
int byte. i;
char *arr
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = ato(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}

arr = (char *)main;
for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", arr[i])
break;
}
printf("%02hhx\n". arr[i]);
}
return (0);
}
