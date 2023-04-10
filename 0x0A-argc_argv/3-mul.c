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
	int result = 0;
	int Number1;
	int Number2;

/* checks is the number of argument is not 3 */
	if (argc != 3)
	{
	printf("%s\n", "Error");
	return (1);
	}
	else
	{
	/* atoi() function from (stdlib.h library) to convert str to int's */
	Number1 = atoi(argv[1]);
	Number2 = atoi(*(argv + 2));
	result = Number1 * Number2;
	printf("%i\n", result);
	}
	return (0);
}
