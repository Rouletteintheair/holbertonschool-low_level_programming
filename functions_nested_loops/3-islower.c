#include "main.h"

/**
 * _islower - function that checks a character is in lowercase
 *
 * @c: character that has to be in lowercase
 *
 * Return: 1 if c is lowercase 0 otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
