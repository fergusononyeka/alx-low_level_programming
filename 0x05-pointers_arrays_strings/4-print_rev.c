#include "main.h"
/**
  * print_rev - print string in reverse
  * @s: string variable
  * Return: void
  */
void print_rev(char *s)
{
	int i = 0;
	int n;

	while (*s != '0')
	{
		s++;
		i++;
	}
	s--;
	n = i;
	while (n > 0)
	{
		_putchar(*s);
		s--;
		n--
	}
	_putchar('\n');
}


