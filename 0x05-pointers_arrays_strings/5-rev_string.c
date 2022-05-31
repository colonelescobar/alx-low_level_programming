#include "main.h"
/**
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int k = 0;
	char j[]; 

	while (s[i])
		i++;

	while (i--)
	{
		j[k] = s[i];
		k++;
		_putchar(j[i]);
	}

	_putchar('\n');
}
