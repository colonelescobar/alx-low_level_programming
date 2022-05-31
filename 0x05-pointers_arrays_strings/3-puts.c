#include "main.h"
#include <stdio.h>

/**
 *_strlen -length of a string
 *@s: A pointer to an int that will be changed/updated
 *
 *Return: void that means our answer is correct
 */

void _puts (char *str)
{
	int u;

	u = 0;
	while (str[u] != '\0')
	{
		u++;
		_putchar(str[u]);
	}
	printf("\n");

}
