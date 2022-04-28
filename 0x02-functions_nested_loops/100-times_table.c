#include "main.h"
#include <stdio.h>

/**
 * print_times_table - A funciton that prints a times table when n is
 * less than 15 and greater than 0.
 *
 * @n - number input for the time table to be printed.
 *
 */

void print_times_table(int n)
{
	int i, j;


	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%3d, ", i * j);
			}

			printf("%3d", i * n);

			printf("\n");
		}
	}

	printf("\n");

}
