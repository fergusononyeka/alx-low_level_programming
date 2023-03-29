#include <time.h>
#include <stdio.h>
#include <stdlib>

/**
  * main - program to generate random numbers as password for the program
  * 101-crackme
  *
  * Return: Always 0
  */
int main(void)
{
	int passwd[100];
	int count = 0;
	int sum;
	int n;

	sum = 0;
	srand(time(NULL));
	while (count < 100)
	{
		passwd[count] = rand() % 78;
		sum = sum + (passwd[count] + '0');
		putchar(passwd[count] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum = sum + n;
			putchar(n + '0');
			break;
		}
		count++;
	}
	return (0);
}
