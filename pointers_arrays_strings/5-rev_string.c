#include "main.h"

/**
 * rev_string - Inverse une chaîne de caractères.
 * @s: Pointeur vers la chaîne à inverser.
 *
 * Description: Cette fonction inverse la chaîne `s` directement en place,
 * sans utiliser de tableau supplémentaire.
 */
void rev_string(char *s)
{
	int i, longueur;
	char temp;

	/* Trouver la longueur de la chaîne */
	longueur = 0;
	while (s[longueur] != '\0')
	{
		longueur++;
	}

	/* Inverser la chaîne en place */
	for (i = 0; i < longueur / 2; i++)
	{
		temp = s[i];
		s[i] = s[longueur - i - 1];
		s[longueur - i - 1] = temp;
	}
}
