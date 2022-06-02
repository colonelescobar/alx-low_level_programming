#include "main.h"
#include <stdio.h>

/**
 * print_array - This function prints n elemnts of an array of integers
 * followed by a new line.
 *
 * @n: Number of elements of array
 * @a: Array.
 * Return: nothing/void.
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]); /* code */
		if (j < (n - 1))
		{
			printf(", ");
		}

	}
	printf("\n");
}
