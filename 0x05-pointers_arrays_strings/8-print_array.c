#include "main.h"
/**
  * print_array - a function to print an array elements
  * @a: name of array
  * @n: no of array element
  * Return: void
  */
void print_array(int *a, int n)
{
	int count;
	
	count = 0;
	while (count < n)
	{
		printf("%d, ", a[count]);
		count++;
	}
	if (count == (n - 1))
	{
		printf("%d", a[n-1]);
	}
	printf("\n");
}
