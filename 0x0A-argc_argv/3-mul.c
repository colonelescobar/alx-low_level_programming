#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program multiplies two numbers and prints the result.
 * @argc: arguement count.
 * @argv: arguement content/strings.
 * Return: int.
 */


int main(int argc, char *argv[])
{
	(void) argc;
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
