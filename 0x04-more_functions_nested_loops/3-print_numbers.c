#include "main.h"
#include <stdio.h>

/**
 * print_numbers - This function prints the numbers 0 to 9.
 *
 * Return: nothing.
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
