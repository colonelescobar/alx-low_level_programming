#include "main.h"
#include <stdio.h>

/**
 * swap_int - A function that swaps the value of two integers.
 * @a: one of the input integers.
 * @b: second input integer.
 * @c: value placeholder.
 * Return: Returns nothing. 
 */

void swap_int(int *a, int *b)
{
	int c;
	
	c = a;
	*a = b;
	*b = c;

}
