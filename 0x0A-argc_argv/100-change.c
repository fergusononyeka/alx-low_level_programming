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
	int Num, count, Sum = 0;
	int coins[] = {25, 10, 5, 2, 1};

/* check if the argument is equal to 2 */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
/* converts string to integer using atoi() */
	Num = atoi(argv[1]);
	if (Num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (count = 0; count < 5 && Num >= 0; count++)
	{
		while (Num >= coins[count])
		{
			Num -= coins[count];
			Sum++;
		}
	}
	printf("%i\n", Sum);
	return (0);
}
