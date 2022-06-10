#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - This function copies the string given by src to dest includidng
 * the null byte.
 * @src: Source string
 * @dest: destination string
 * @n: number of characters to copy.
 * Return: void/nothing.
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;



	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i]; /* copies src into dest */
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';/* code */
	}


	return (dest);

}
