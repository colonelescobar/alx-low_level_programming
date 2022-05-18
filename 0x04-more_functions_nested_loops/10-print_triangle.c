#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print triangle of size "size" using "_putchar" except for
 * size = 0.
 *
 * Return: void.
 */

void print_triangle(int size)
{
	int i,j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if(i + j >= size)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}

}
