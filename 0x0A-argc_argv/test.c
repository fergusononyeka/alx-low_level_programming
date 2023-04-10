#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("The number of parameters passed is : %d\n", argc);
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("argv index %d is = %s\n", i, argv[i]);
	}
	return (0);
}
