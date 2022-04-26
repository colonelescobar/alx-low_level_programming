#include "main.h"

/**
 * _islower - This function returns a value of 1 if the case of 
 * an alphabet is lower and 0 if it isn't.
 *
 * @c: takes in a character.
 *
 * return: 1 if it matches, 0 if it doesn't.
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
