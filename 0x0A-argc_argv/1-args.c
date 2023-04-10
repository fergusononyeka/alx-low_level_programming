#include <stdio.h>
/**
  * main - Entry points
  * @argc: variable that counts the number of parameters
  * @argv: that holds the strings passed to the program
  * Return: Always 0 (Success)
  */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
