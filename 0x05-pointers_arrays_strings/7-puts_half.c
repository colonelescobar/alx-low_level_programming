#include "main.h"
#include <stdio.h> 

/**
 * puts_half - prints half of the characters of a string.
 * @str: input string.
 * Return: returns nothing/void.
 */

void puts_half(char *str)
{
	int string_length = 0, i;

	for (i = 0; str[i] != '\0'; i++)
			;

		string_length = i;
	if (string_length % 2 != 0)
	{
		for (i = ((string_length - 1)) / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	
	}
	else
	{
		for (i = (string_length/2); str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}

	printf("\n");
}
