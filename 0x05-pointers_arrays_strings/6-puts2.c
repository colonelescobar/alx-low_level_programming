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

	while (str[i] != '\0')
	{
		i++;
		_putchar(str[i]);

	}
	printf("\n");
}
