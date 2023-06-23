#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int count = 0;
	int sum = 0;

	while(count < argc)
	{
	printf("%s\n", argv[count]);
	sum += atoi(argc);
	printf("sum of arguments is %d", argc);
	count++;
	}
	return(0);
}
