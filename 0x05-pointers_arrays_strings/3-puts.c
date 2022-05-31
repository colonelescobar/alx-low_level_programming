#include "main.h"
#include <stdio.h>

/**
 *_puts - prints the characters of a string.
 * @s: A pointer to an int that will be changed/updated
 *
 *Return: void that means our answer is correct
 */

void _puts(char *str)
{
	int u;
	u = 0;
	
	while (str[u] != '\0')
	{
		
		_putchar(str[u]);
		u++;
	}
	printf("\n");

}
