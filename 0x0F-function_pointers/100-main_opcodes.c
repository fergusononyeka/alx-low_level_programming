#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int Bytes, n;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	Bytes = atoi(argv[1]);

	if (Bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (n = 0; n < bytes; n++)
	{
		if (n == Bytes - 1)
		{
			printf("%02hhx\n", array[n]);
			break;
		}
		printf("%02hhx ", array[n]);
	}
	return (0);
}
