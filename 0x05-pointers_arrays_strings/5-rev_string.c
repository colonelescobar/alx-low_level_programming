#include "main.h"
#include <stdio.h>
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */

void rev_string(char *s)
{
	int i, k;
	char *j;

	for (i = 0; s[i] != '\0'; i++)
		;

	j = s;
	k = 0;
	s = 0;
	while  (i--)
	{
		k++;
		s[k] = j[i]; /* code */
	}

}

