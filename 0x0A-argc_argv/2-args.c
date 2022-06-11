#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints all arguements it recieves.
 * @argc: arguement count.
 * @argv: arguement content/strings.
 * Return: int.
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
