#include <stdio.h>
#include <unistd.h>

/**
 *main - Prints _putchar and a new line.
 *
 *Return: 0
 */

int main(void)
{
	int i;
	char P[] = "_putchar";

	for (i = 0; i < 8; i++)
{
	putchar(P[i]);
}
	putchar('\n');
	return (0);
}
