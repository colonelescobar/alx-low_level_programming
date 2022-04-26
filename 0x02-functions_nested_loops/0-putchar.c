#include "main.h"
/**
 * main - This code prints "_putchar" and adds a newline.
 *
 * Return: putchar.
 *
 */
int main(void)
{
	char var1[] = "_putchar";
	
	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(var1[c]);
	}
	_putchar('\n');
	return (0);

}
