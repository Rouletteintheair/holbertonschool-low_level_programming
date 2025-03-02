#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');  /* Print only newline if size is 0 or less */
	}
	else
	{
		for (i = 0; i < size; i++)  /* Loop for each row */
		{
			for (j = 0; j < size; j++)  /* Loop for each column */
			{
				_putchar('#');  /* Print the # character */
			}
			_putchar('\n');  /* Print newline after each row */
		}
	}
}
