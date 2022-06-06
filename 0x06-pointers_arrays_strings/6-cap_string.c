#include "main.h"
#include <stdio.h>

/**
 * cap_string - A function that capitalizes a string.
 * @str: inpite string.
 *
 * Return: char.
 */

char *cap_string(char *str)
{
	int i = 0;
	/* int j; */

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;

		if ((str[i] >= 0 && str[i] <= 32) || str[i] == 46)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}

	}
	return (str);
}
