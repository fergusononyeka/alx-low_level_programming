include "main.h"
/**
  * swap_int - to swap integers
  * @a: int 1
  * @b: int 2
  */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
