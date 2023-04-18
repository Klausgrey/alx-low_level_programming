#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - function that concatinates a string.
* @s1: pointer to the first string.
* @s2: pointer to the second string.
* @n: parameter
* Return: Null if an error occurrs.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len_i = 0, len_j = 0, i;
char *ptr;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

while (s1[len_i] != '\0')
len_i++;
while (s2[len_j] != '\0')
len_j++;

if (n > len_j)
n = len_j;

ptr = malloc((len_j + n + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);

for (i = 0; i < len_i; i++)
{
ptr[i] = s1[i];
}
for (; i < (len_i + n); i++)
{
ptr[i] = s2[i - len_i];
}
ptr[i] = '\0';
return (ptr);
}
