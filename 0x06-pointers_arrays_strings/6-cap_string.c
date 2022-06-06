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
	int i;

	for (i = 0; str[i] >= 'a' && str[i] <= 'z' )
	{
		str[i] = str[i] - 32;
	}
	return (str);
}