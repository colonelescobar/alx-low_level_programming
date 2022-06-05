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
	int i,j;
	int place_holder[n];

	for (i = 0; i < n; i++)
	{
		a[i] = place_holder[(n-1)-i];/* code */
	}
	a = place_holder;
}