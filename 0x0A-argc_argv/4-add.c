#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry points
  * Description: prints all arguments passed
  * @argc: variable that counts the number of parameters
  * @argv: that holds the strings passed to the program
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int sum = 0, Num, i, j, k;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
/* To check if the argument is not an integer */
		if (argv[i][j] > '9' || argv[i][j] < '0')
		{
			printf("%s\n", "Error");
			return (1);
		}
		}
	}
	for (k = 1; k < argc; k++)
	{
		Num = atoi(argv[k]);
		sum = sum + Num;
	}
	printf("%i\n", sum);
	return (0);
}
