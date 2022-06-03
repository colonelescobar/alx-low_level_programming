#include "main.h"
#include <string.h>

/**
 * _strncat - This function concatenates  n elements of "src"
 * strings to dest strings and adds "\0" if n >= src length
 * @dest: destination of concatenated strings.
 * @src: source string.
 * Return: concatenated strings.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';
	return (dest);

}