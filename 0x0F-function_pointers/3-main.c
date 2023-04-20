#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
	 */
	int main(int __attribute__((__unused__)) argc, char *argv[])
	{
		int N1, N2;
		char *operator;


		if (argc != 4)
		{
			printf("Error\n");
			exit(98);
		}
		N1 = atoi(argv[1]);
		op = argv[2];
		N2 = atoi(argv[3]);
		if (get_op_func(operator) == NULL || operator[1] != '\0')
		{
			printf("Error\n");
			exit(99);
		}
		if ((*operator == '/' && N2 == 0) ||
		    (*operator == '%' && N2 == 0))
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", get_op_func(operator)(N1, N2));
		return (0);
	}
