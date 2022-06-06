#include "main.h"
#include <stdio.h>

/**
 * leet - Replaces certain characters with number equivalents.
 * @str: The input string.
 * Return: Char.
 *
 */

char *leet(char *str)
{
	char a[] = {'a','e','o','t','l'};
	char b[] = {'A','E','O','T','L'};
	char c[] = {'4','3','0','7','1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == a[j]  || str[i] == b[j])
			{
				str[i] = c[j];
			}
		}
	}
	return (str);
}
