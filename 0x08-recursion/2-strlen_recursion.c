#include "main.h"

/**
 * _strlen_recursion -  A function that prints a strings length.
 *  @s: A pointer to a string.
 * Return: Length of string.
 *
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
