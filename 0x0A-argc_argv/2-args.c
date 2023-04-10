#include <stdio.h>
/**
  * main - Entry points
  * Description: prints all arguments passed
  * @argc: variable that counts the number of parameters
  * @argv: that holds the strings passed to the program
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
	printf("%s\n", argv[count]);
	count = count + 1;
	}
	return (0);
}
