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
	int s1_stringLen = strlen(s1);
	int s2_stringLen = strlen(s2);
	int match_count = 0;
	int negative;

	for (i = 0; i < s1_stringLen; i++)
	{
		if (s1[i] == s2[i])
		{
			match_count += 1;
		}
		else
			break;
	}

	if (s1_stringLen >= match_count && s1_stringLen > s2_stringLen)
	{
		return (*s1 - *s2);
	}
	else if (s1_stringLen == s2_stringLen && match_count == s1_stringLen)
	{
		return (*s1 - *s2);
	}
	else if (s2_stringLen >= match_count && s2_stringLen > s1_stringLen)
	{
		negative = 0 - (s1_stringLen + match_count);
		return (*s1 - *s2);
	}
	return (0);
}
