#include "main.h"

/**
 * _islower - returns 1 if lowercase, else 0.
 *
 * @c: takes in a character.
 *
 * Return: 1 if it matches, 0 if it doesn't.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
