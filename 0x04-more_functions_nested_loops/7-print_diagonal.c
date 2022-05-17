#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints '\' n times diagonally.
 * @n: number of itmes the character '\' should be printed.
 *
 * Return: nothing.
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n ; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
