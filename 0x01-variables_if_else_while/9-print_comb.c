#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(0)
{
	int i = 48;

	while (i <= 57)
	{
		if (i == 57)
		{
			continue;
			putchar(i + 48);
			putchar(',');
			putchar(' ');
			i++;
		}
	}
	putchar('\n');
	return (0);
}

