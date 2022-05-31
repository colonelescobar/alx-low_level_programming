#include "main.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	char *j;
	int k = 0;

	while (s[i])
		i++;

	j = s;


	while (i--)
	{
		s[k] = j[i];
		_putchar(s[k]);
		k++;
	}

	_putchar('\n');
}
