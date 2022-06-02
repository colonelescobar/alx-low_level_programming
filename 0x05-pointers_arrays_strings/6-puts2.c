#include "main.h"
#include <stdio.h>

/**
 * puts2 - A funciton that prints every character of a string
 * followed by a new line.
 *
 * @str: Input string.
 */

void puts2(char *str)
{
	int i;

	i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ( i == 0)
		{
			_putchar(str[0]);
		}
		else if ( i % 2 == 0)
		{
			_putchar(str[i]);
		}

}
	printf("\n");
}
