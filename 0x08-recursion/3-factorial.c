#include "main.h"

/**
 * factorial - A function that finds the factorial of a given numnber.
 *
 * @n: input number.
 * Return: integer.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);	/* code */
	}
	if (n < 0)
	{
		return (-1);/* code */
	}


	return (n * factorial(n - 1));

}
