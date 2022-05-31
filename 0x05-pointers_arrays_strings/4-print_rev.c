#include "main.h"
#include <stdio.h>

/**
 * print_rev - This function prints a string in reverse.
 * @s: string input.
 * 
 * Return: void/nothing.
 */

void print_rev(char *s)
{
	int i

	i=_strlen(s)

	while (i != 0)
	{
		_putchar(s[i]);
		i--;
	}
	printf("\n");
}


/**
 *_strlen -length of a string
 *@s: A pointer to an int that will be changed/updated
 *
 *Return: void that means our answer is correct
 */

int _strlen(char *s)
{
	int u;

	u = 0;

	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
