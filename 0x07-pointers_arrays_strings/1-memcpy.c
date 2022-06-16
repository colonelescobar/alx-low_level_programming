#include "main.h"
#include <stdio.h>

/**
 * _memcpy - This function copies memory area of n elements in src to
 * destination.
 *
 * @dest: destination.
 * @src:: source of data.
 * @n: number of elements to copy from source.
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src [i];
	}

	return (dest);
	
}
