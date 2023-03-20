#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Num = 0;

	while (Num < 10)
	{
		putchar(Num + 48);
		Num++;
	}
	putchar('\n');
	return (0);
}
