#include <stdio.h>
#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: pointer variable.
 * @n: number of bytes to be filled.
 * 
 * Return: char.
 */

char *_memset(char *s, char b, unsigned int n)
{
		int i;
		for (i = 0; i < n; i++)
		{
			*(s + i) = b;
		}
				
		return  (s);
}