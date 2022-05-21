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
	unsigned long c, sum = 0;

	while (sum <= 4000000)
	{
		c= a + b;
		a = b;
		b = c;
		
		if(b % 2 == 0)
		{
			sum += b;
		}

	}
	printf("%lu\n", sum);
	return (0);

}
