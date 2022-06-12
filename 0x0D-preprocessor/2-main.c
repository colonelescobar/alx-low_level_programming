#include <stdio.h>

/**
 * main - A program that prints the name of the file it was compiled from. 
 *
 * Retrun: 0.
 */

int main(void)
{
	printf("This file was compiled from: %s\n", __FILE__);

	return (0);
}
