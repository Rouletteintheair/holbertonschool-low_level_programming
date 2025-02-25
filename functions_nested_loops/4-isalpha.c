#include "main.h"

/**
 * _isalpha - Checks if the choosen character is a letter
 *
 * @c: the variable we will use for our function
 *
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
