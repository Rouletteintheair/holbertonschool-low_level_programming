#include "main.h"

/**
 * print_rev - Affiche une chaîne de caractères à l'envers.
 * @s: Pointeur vers la chaîne de caractères à afficher.
 *
 * Description: Cette fonction parcourt la chaîne `s`,
 * calcule sa longueur, puis l'affiche à l'envers
 * en utilisant `_putchar`. Une nouvelle ligne est
 * ajoutée à la fin.
 */
void print_rev(char *s)
{
	int longueur = 0;

	/* Trouver la longueur de la chaîne */
	while (s[longueur] != '\0')
	{
		longueur++;
	}

	/* Afficher la chaîne en sens inverse */
	while (longueur > 0)
	{
		longueur--;
		_putchar(s[longueur]);
	}

	_putchar('\n');
}
