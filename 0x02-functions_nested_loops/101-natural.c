#include "main.h"
#include <stdio.h>


/**
 * main - this program prints a series of natural numbers that are factors of
 * 		1024.
 *
 * Return: Nothing.
 */

int main(int n)
{

	for (n = 0;n < 1024; n++)
		 {
			if (n % 3 == 0 || n % 5 == 0)
			{
				printf("%*d,", 4, n);
			}
		 }
	return (0);
}