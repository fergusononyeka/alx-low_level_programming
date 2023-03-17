#include <stdio.h>

/**
 * main - To print size of types in c program
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	int y;
	long int a;
	long long int b;
	float c;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));
	return (0);
}
