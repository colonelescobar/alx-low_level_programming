#include "main.h"
#include <stdio.h>
/**
 * 
 * _isupper - THis function checks the case of an input, whether uppercase/lowercase.
 *
 * @c - input
 * return: returns 1 when uppercase and/or 0 otherwise.
 *
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
