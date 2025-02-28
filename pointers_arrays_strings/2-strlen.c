#include "main.h"

/**
 * _strlen - Fonction qui retourne la longueur d'une chaîne de caractères
 * @str: La chaîne dont on veut calculer la longueur
 *
 * Return: La longueur de la chaîne (sans compter le caractère nul '\0')
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
