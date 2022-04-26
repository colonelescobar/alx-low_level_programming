#include "main.h"

/**
 * _islower - This function returns a value of 1 if the case of an alphabet
 * is lower and 0 if it isn;t.
 *
 */


int _islower(int c)
{
	if ( c >= 'a' && c <= 'z' )
	{
		return (1);
        }
        else
        {
                return (0);
        }
}
