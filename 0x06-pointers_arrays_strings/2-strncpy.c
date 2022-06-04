#include "main.h"
#include <string.h>

/**
 * _strcpy - This funcction copies the stringg given by src to dest includidng
 * the null byte.
 * @src: Source string
 * @dest: destination string
 *
 * Return: void/nothing.
 * 
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int string_length;

	string_length = strlen(src); /* finds string length excluding null byte. */

	for (i = 0; i < strlen(src) ; i++)
	{
		dest[i] = src[i]; /* copies src into dest */
	}

	dest[i] = '\0'; /* inserts the null byte.*/

	return (dest);

}