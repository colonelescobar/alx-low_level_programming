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
	unsigned long long int counter;
	unsigned long long int a = 1, b = 2;
	unsigned long long int c;

	printf("%llu, %llu, ", a, b);
	for (counter = 1; counter <= 96; counter++)
	{
		if (counter != 48)
		{	c = a + b;
			printf("%llu, ", c);
			a = b;
			b = c;
		}

	}
	c = a + b;
	printf("%llu\n", c);
	return (0);

}
