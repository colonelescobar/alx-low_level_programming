#include "main.h"
#include <stdio.h>
/**
 * _isupper - Checks the case of an input, whether uppercase/lowercase.
 *
 *
 * Return 0: returns 1 when uppercase and/or 0 otherwise.
 *
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 98)
	{
		return (1);
	}

	return (0);
}
