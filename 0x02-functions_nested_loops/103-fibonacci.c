#include "main.h"
#include <stdio.h>

/**
 * main - prints the sum elements of the fibonnacci series less 
 * than 4000000 and even.
 *
 *
 * Return: return 0 when done.
 */


int main(void)
{

	unsigned long a = 1, b = 1;
	unsigned long c, sum = 0;

	while (a <= 4000000)
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
