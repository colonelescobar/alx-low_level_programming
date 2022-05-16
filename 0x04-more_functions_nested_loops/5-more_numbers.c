#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints 0 to 14 ten times and then a newline.
 * 
 * Return: nothing.
 */


void more_numbers(void)
{

	int i;
	int j = 1;
	 
	while ( j <= 10)
	{
		++j;

		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar((i % 10) + '0' );
		}
		_putchar('\n');
	}

}
