/*
 * File 6-size.c
 *
 * Author: yinti agati <tiagati@yahoo.com>
 */

#include<stdio.h>

/**
 * main - A C program that prints the size of various types on the computer
 *		it is compiled and run on.
 *
 *
 * Return: 0.
 */

int main(void)
{
	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of an int: %zu bytes\n", sizeof(int));
	printf("Size of a long int: %zu bytes \n", sizeof(long int));
	printf("Size of long long int: %zu bytes\n", sizeof(long long int));
	printf("Size of float: %zu bytes\n", sizeof(float));

	return (0);

}
