#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{
	int i, j, sum = 0;
	int count = 0;
	char *ptr;
	if(argc == 0)
		printf("0\n");
	else
	{
		for(i = 1; i < argc; i++)

		{
			ptr = argv[i];
			count = strlen(ptr);
		for(j = 0; j < count; j++)
		{
			if(argv[j] < '0' || > '9')
				printf("error\n");
		}
		sum += atoi(argv[i]);
		}
	}
	printf("%d", sum);
}
