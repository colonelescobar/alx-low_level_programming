#include "main.h"

/**
 *_strlen -length of a string
 *@s: A pointer to an int that will be changed/updated
 *
 *Return: void that means our answer is correct
 */

int _strlen(char *str)
{
	int u;

	u = 0;
	while (str[u] != '\0')
	{
		u++;
	}
	return (u);
	return ('\n');
}