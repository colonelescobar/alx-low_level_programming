#include "main.h"

int _sqrt(int n, counter);
/**
 * _sqrt_recursion - A function that returns the natural square root of a
 * number. 
 *
 * @n: Input number. 
 * Return: int 
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(n, 1));
}


int _sqrt(int n, counter)
{
	if ( n == counter * counter)
	{
		return (counter);
	}
	else if (n < counter * counter)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, counter + 1));
	}
}	
