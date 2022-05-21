#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 elements of the fibonnacci series starting
 * from 1.
 *
 *
 * Return: return 0 when done.
 */


int main(void)
{
	unsigned long counter;
	unsigned long a = 1, b = 2;
	unsigned long c;

	printf("%lu, %lu, ", a, b);
	for (counter = 1; counter <= 48; counter++)
	{
		if (counter != 48)
		{	c = a + b;
			printf("%lu, ", c);
			a = b;
			b = c;
		}

	}
	c = a + b;
	printf("%lu\n", c);
	return (0);

}
