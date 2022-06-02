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
	int i;

	for (i = 0; i != '\0'; i++)
	;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]); /* code */
		if (i < n)
		{
			printf(", ");
		}

	}
	printf("\n");
}
