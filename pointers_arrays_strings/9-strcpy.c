#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: the destination buffer
 * @src: the source string to copy
 *
 * Return: a pointer to the destination string (dest)
 *
 * Description: This function copies the string from the source string (src)
 * to the destination string (dest), including the null byte at the end of
 * the string. The function returns the pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	/* Copy the string including the null byte */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Copy the null byte to terminate the string */
	dest[i] = '\0';

	return dest;  /* Return pointer to destination */
}

