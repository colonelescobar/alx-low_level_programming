#include "main.h"

/**
 * _strlen_recursion -  A function that prints a strings length.
 *  @s: A pointer to a string.
 * Return: Length of string.
 *
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		i += 1;
		_strlen_recursion(s + 1);
	}
	return (i);
}
