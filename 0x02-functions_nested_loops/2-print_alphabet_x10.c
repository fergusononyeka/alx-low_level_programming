#include "main.h"
/**
  * print_alphabet_x10 - Prints alphabets in lower case 10 times
  * Return: Always 0 (Success)
  */
void print_alphabet_x10(void)
{
	int i,j;

	for (i = 1; i <=10; i++)
	{
		for (j = 97; j<123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	return;
}
