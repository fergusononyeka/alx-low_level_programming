#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: pointer array
 * @size: size of elements in array
 * @cmp: pointer to function of one of the 3 in main
 * Return: 0
 */
	int int_index(int *array, int size, int (*cmp)(int))
	{
		int count;

		if (array == NULL || size <= 0 || cmp == NULL)
		{
			return (-1);
		}
		count = 0;
		while (count < size)
		{
			if (cmp(array[count]))
				return (count);
			count++;
		}
		return (-1);
	}
