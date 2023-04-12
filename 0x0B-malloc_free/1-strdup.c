#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{ // check if str is NULL
	return NULL;
	}
	char *dup = malloc(strlen(str) + 1); /* allocate memory for the duplicate string */
	 if (dup == NULL)
	{ /* check if allocation was successful */
        return NULL;
	}
	strcpy(dup, str); /* copy the string to the new memory location */
	return (dup);
}
