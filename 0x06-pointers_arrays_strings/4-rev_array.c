#include "main.h"
#include <stdio.h>

/**
 * reverse_array - This function reverses the content of an array.
 * @a: The array.
 * @n: The number of elemnts of array.
 *
 * Return: void/nothing.
 *
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
