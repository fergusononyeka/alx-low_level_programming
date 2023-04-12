#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to initialize all array index
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);/* Allocates memory */
	if (size == 0 || arr == NULL)
		return (NULL);
/* Assigns char c to each index of the arr */
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
	free(arr);/* free allocated memory */
}
