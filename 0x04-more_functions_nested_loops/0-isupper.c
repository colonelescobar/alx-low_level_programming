#include "main.h"

/**
 * _isupper - checks the case of an input, whether uppercase/lowercase.
 * @c - input to be checked.
 *
 * Return: returns 1 when uppercase and/or 0 otherwise.
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
