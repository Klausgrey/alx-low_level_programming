#include <stdio.h>
/**
 * main - the function
 *!
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsighed long)sizeof(a));
	printf("Size of an int: %lu bytes(s)\n", (unsighed long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsighed long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsighed long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsighed long)sizeof(e));
	return (0);
} 
