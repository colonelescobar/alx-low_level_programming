#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Changes all the lowercase letters of a string ot uppercase.
 * Return: char.
 *
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}