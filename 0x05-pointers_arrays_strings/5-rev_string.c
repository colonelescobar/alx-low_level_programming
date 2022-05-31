#include "main.h"
/**
 * print_rev - prints reversed string, followed by a new line
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
		s[k] = j [i];
		k++;
		_putchar(s[k]);
	}

	_putchar('\n');
}
