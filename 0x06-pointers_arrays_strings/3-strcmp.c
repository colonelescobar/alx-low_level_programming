#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcmp - This function compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: integer.
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int s1_Len = strlen(s1);

	for (i = 0; i < s1_Len; i++)
	{
		if (s1[i] == s2[i])
			;
		else
			break;
	}
	return (s1[i] - s2[i]);

}
