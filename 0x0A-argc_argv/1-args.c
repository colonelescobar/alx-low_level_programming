#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints the number of arguements passed to it.
 * @argc: arguement count.
 * @argv: arguement content/strings.
 * Return: int.
 */


int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc);
	return (0);

}
