/**
 * @file 4-pow_recursion.c
 * @author Yinti Agati (tiagati@yahoo.com)
 * @brief A function
 * @version 0.1
 * @date 2022-06-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x raised to the power
 * of y.
 * @x: input number.
 * @y: power.
 * Return: integer.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
		return (x * _pow_recursion(x, (y - 1)));

}