#include "main.h"
#include <stdio.h> 

/**
 * puts_half - prints half of the characters of a string.
 * @str: input string.
 * Return: returns nothing/void.
 */

void puts_half(char *str)
{
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			_putchar(str[0]);
		}
		else if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

	}
	printf("\n");
}
}