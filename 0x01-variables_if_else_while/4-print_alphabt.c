#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i=97;

	while (i <=122)
		if ((i == 113) || (i ==101))
			continue;
			putchar(i);
			i++;
	putchar(i);
	return (0);
}
