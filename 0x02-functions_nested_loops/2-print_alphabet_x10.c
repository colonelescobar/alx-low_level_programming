#include "main.h"

/**
 * print_alphabet_x10 - This code prints the letters of the alphabets 10 times.
 *
 * return : always returns 0
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char c;

	while (count < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		count++;
		_putchar('\n');
	}
}
