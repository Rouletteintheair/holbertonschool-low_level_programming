#include "main.h"

/**
 * print_sign - the function prints the sign of a number
 *
 * @n: the variable we need to check
 *
 * Return: 1 and print + if n > zero, 0 and print 0 if n is zero
 * -1 and print - if n is < zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
