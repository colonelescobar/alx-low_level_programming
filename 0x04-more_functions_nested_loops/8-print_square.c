#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square using # symbol.
 * @size: input of square size.
 *
 * Return: returns nothing
 */

void print_square(int size)
{
	int i, j;


	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

