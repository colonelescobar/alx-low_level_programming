#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 elements of the fibonnacci series starting from 1.
 *
 *
 * return: return 0 when done.
 */


int main(void)
{
	long unsigned counter;
	long unsigned a = 1, b = 2;
	long unsigned c;

	printf("%lu, %lu, ", a, b);
	for (counter = 1; counter <= 49; counter++)
	{
		if( counter != 48)
		{	c = a + b;
			printf("%lu, ", c );
			a = b;
			b = c;
		}
		
	}
	printf("%lu\n", c);
	return (0);
	
}
