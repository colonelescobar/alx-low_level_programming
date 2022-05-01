#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */

void print_times_table(int n)
{
	int i, j;

		
	if (n >= 0 && n <= 15)
	{	if (n == 0)
		{
			printf("0");
		}

		else
		{
			for (i = 0; i <= n; i++)
			{
				printf("0,");
	
				for (j = 1; j < n; j++)
				{
	
					printf("%*d,", 4, i * j);

				}

				printf("%*d\n", 4, i * j);
			}
		}
		printf("\n");
	}

}
