#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: duplicate memory 
 */
char *_strdup(char *str)
{
	char *dup;
	int i, size = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size]; size++)
	{
		dup[size] = str[size];
	}
	free(dup);
	return (dup);
}
