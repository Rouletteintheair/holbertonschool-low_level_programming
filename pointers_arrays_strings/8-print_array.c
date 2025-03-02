#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: the array of integers
 * @n: the number of elements to print
 *
 * Description: This function prints the first n elements of the array, with
 * each element separated by a comma and space, followed by a new line.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");  /* Add comma and space except after the last element */
		}
	}

	printf("\n");  /* New line after printing the array */
}

