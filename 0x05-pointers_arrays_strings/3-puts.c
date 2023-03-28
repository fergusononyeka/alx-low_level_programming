#include "main.h"
/**
  * _puts - to print a string ending with new line
  * @str: string variable
  * Return: void
  */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '0'; i++)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
