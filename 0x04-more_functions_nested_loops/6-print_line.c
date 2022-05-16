#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws straight line in the terminal.
 * @n: input character denoting number of times '_' is should be prinyed.
 *
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
