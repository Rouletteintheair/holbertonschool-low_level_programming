#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times.
 */
void more_numbers(void)
{
	int i, num;

	char tens, ones;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
	{
		if (num > 9) /* Handle two-digit numbers */
		{
			tens = (num / 10) + '0';
			_putchar(tens);
		}
		ones = (num % 10) + '0';
		_putchar(ones);
		}
		_putchar('\n'); /* Print new line after each set */
	}
}
