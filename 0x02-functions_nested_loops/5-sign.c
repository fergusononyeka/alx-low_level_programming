#include "main.h"

/**
  * print_sign - prints the sign of a number
  * Return: 1 for positive n, -1 for negative n or 0 otherwise
  */

int print_sign(int num)
{
	if (num > 0)
	{
		_putchar(43);
		return (1);
	}
	else if ( num < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar (48);
		return (0);
	}
}
