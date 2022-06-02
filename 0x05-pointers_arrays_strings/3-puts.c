#include "main.h"
#include <stdio.h>

/**
 *_puts - prints the characters of a string.
 * @str: A pointer to a char that will be printed.
 *
 *Return: void that means our answer is correct
 */

void _puts(char *str)
{
	int u;

	u = 0;

	for (u = 0; str[u] != '\0'; u++)
	{

		_putchar(str[u]);
	}
	printf("\n");

}
