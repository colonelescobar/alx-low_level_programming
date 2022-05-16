#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Function checks if input is digit or not.
 *
 * @c: input character
 *
 *Retur: returns 1 if @c is a digit and 0 otherwise.
 */

int _isdigit(int c)
{

	if ( c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
