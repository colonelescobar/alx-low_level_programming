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

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
		;

	j = s;

	while (s[i] != '\0')
	{
		j[i] = s[i];
	}

	while (i--)
	{
		k--;
		s[k] = j[i]; /* code */
	}
printf("%s", s);
}

