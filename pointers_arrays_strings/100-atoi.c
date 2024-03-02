#include "main.h"
#include <limits.h>
#include <stdbool.h> // Ajout de cette inclusion pour utiliser le type bool

/**
 * my_atoi - Convertit une chaîne de caractères en un entier.
 * @s: La chaîne de caractères à convertir.
 * Return: L'entier converti.
 */
int my_atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int max_div_10 = INT_MAX / 10;
	int max_mod_10 = INT_MAX % 10;
	bool found_digit = false; // Utilisation d'un booléen pour suivre si un chiffre a été trouvé

	// Ignorer les espaces au début de la chaîne
	while (s[i] == ' ')
	{
		i++;
	}

	// Vérifier le signe
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	// Convertir les chiffres en entier
	while (s[i] >= '0' && s[i] <= '9')
	{
		found_digit = true; // Marquer qu'un chiffre a été trouvé
		int digit = s[i] - '0';

		// Vérifier les débordements
		if (result > max_div_10 || (result == max_div_10 && digit > max_mod_10))
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}

		result = result * 10 + digit;
		i++;
	}

	// Si aucun chiffre n'a été trouvé, retourner 0
	if (!found_digit)
	{
		return 0;
	}

	return result * sign;
}
