#include "main.h"
#include <string.h>

/**
 * _strcat - This function concatenates two strings.
 * @src: Source value holder.
 * @dest: Destination of concatenated strings.
 * Return: a pointer of type (char *).
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';
	return (dest);

}
