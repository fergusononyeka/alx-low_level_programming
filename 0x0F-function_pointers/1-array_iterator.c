#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - A function that prints each array elements on a new line
 * @array: array of int
 * @size: No of elements to print
 * @action: pointer function to print in regular or hex
 * Return: nothing
 */
	void array_iterator(int *array, size_t size, void (*action)(int))
	{
		unsigned int count;

		if (array == NULL || action == NULL)
		{
			return;
		}
		for (count = 0; count < size; count++)
		{
			action(array[count]);
		}
	}
