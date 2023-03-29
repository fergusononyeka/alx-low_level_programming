#include "main.h"

/**
  * char *_strcpy - a functionto copy string from a pointer
  * @dest: copy destination
  * @src: copy surce
  * Return: string
  */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + 1) != '\0')
	{
		a++;
	}
	while (b < 1)
	{
		dest[b] = src[b];
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
