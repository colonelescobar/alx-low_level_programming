#include <stdio.h>

/**
 * main - A program that prints the name of the file it was compiled from.
 *
 * Return: int.
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
