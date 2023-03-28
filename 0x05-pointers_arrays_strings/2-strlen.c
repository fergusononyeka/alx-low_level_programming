#include "main.h"
/**
  * _strlen - to print string lenght
  * @s: string variable
  * Return: lenght of string
  */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; count++)
	{
		s++;
	}
	return (count);
}
