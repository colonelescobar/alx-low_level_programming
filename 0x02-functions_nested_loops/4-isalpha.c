#include "main.h"

/*
 * _isalpha - Checks for alphabetic character.
 *
 * Return: 1 if letter, lowercase and/or uppercase, returns 0 otherwise.
 *
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <='Z')|| (c >='a' && c <= 'z' ))
	{
		return (1);
	}

	else 
	{
		return (0);
	}

}
