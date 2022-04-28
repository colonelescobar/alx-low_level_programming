#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_to_98 - This function increments or decrements a given integer
 *		input till the integer 98 while printing every decrement/increment.
 *		prints a newline when done.
 * @n: input integer.
 *
 * Return: int.
 */

void print_to_98(int n)
{

	if (n >= 98)
	{
		while (n != 98)
		{
			printf("%d, ", n--);
		}
		printf("%d,", n);
	}

	else if (n < 98)
	{
		while (n != 98)
		{
			printf("%d, ", n++);
		}
		printf("%d.", n);
	}
	printf("\n");
}
