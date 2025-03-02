#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character _ should be printed.
 */
void print_line(int n)
{
	int i;  /* Declare the variable i outside the loop */

	if (n <= 0)
	{
		_putchar('\n');  /* Print only newline if n is 0 or less */
	}
	else
	{
		for (i = 0; i < n; i++)  /* Use i in the for loop */
		{
			_putchar('_');  /* Print '_' n times */
		}
		_putchar('\n');  /* Print newline after the line */
	}
}
