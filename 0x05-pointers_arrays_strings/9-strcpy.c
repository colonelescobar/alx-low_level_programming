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
	int len = 0;

	
	for ( len = 0; src[len] != '\0'; len++)
	;

	dest = src;
	dest[len] = '\0';

	printf("\n");
	return (dest);
}
