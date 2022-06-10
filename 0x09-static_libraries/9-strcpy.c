#include "main.h"
#include <stdio.h>

/**
 * _strcpy - A function that copies the string pointed to by "src", including
 * the terminating null byte "\0".
 * @dest: destination variable.
 * @src: source value holder.
 *
 * Return: Nothing
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
