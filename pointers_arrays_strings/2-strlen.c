#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int longueur = 0;

	while (s[longueur] != '\0')
	{
		longueur++;
	}
	return (longueur);
}
