#include "main.h"
/**
 * reset_to_98 - a function that changes value
 * Return: always 0 (Success)
*/
void reset_to_98(int *n)
{
	int i;

	i = 402;
	n = &i;
	*n = 98;
	_putchar(i);
}

