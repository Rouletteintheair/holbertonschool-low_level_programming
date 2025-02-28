#include "main.h"

/**
 * _puts - Affiche une chaîne de caractères suivie d'une nouvelle ligne.
 * @str: Pointeur vers la chaîne de caractères à afficher.
 *
 * Description: Cette fonction parcourt la chaîne `str` et affiche
 * chaque caractère un par un avec `_putchar`. Une nouvelle ligne est
 * ajoutée à la fin.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
