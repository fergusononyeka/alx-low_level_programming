#include "main.h"

/**
 * print_last_digit - A method to print the last digit of an interger
 * Return: value of the last digit
 */

int print_las_digit(int num)
{
	int lastnum;
	
	lastnum = num % 10;
	if (x < 0)
	{
		lastnum = lastnum * -1;
	}
	_putchar(lastnum + '0');
	return (lastnum);
}

