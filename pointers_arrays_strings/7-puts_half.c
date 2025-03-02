#include <unistd.h>
#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to be printed
 *
 * Description: This function prints the second half of the string. If the
 * string has an odd length, it prints the last n characters, where n is
 * calculated as (length + 1) / 2.
 */
void puts_half(char *str)
{
	int len = 0;
	int start;

	/* Find the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* If length is odd, start from the middle, else from half */
	start = (len % 2 == 0) ? len / 2 : (len + 1) / 2;

	/* Print the second half of the string */
	while (str[start] != '\0')
	{
		write(1, &str[start], 1);  /* Use write to print each character */
		start++;
	}

	write(1, "\n", 1);  /* Print the newline character */
}

