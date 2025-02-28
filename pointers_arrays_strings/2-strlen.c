#include "main.h"

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne dont on veut mesurer la longueur.
 *
 * Description: Cette fonction prend une chaîne de caractères
 * et retourne sa longueur sans compter le caractère nul '\0'.
 *
 * Return: La longueur de la chaîne en tant qu'entier.
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
