#include "main.h"

/**
  * _isaplpha - checks for an alphabetic character
  * Return: 1 for alphabetic character or 0 otherwise
  */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97)) || (c >= 97 && c <=122))
	{
		return (1);
	}
	return (0);
}
