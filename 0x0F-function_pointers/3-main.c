#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char x;
	int (*func_tion)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func_tion = get_op_func(argv[2]);

	if (!func_tion)
	{
		printf("Error\n");
		exit(99);
	}

	x = *argv[2];

	if ((x == '/' || x == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func_tion(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
