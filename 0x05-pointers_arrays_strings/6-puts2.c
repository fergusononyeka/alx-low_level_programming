#include "main.h"
/**
  * puts2 - function to print only one character out of two
  * @str: input string
  * Return: void
  */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *x = str;
	int o;

	while (*x != '\0')
	{
		x++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
