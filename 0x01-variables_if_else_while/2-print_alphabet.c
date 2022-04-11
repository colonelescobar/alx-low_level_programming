#include <stdio.h>
#include <ctype.h>

/**
 *main - Program that prints the alphabet in lowercase, followed by a new line.
 *You can only use the putchar
 *Return: 0
 */

int main(void)
{
int l = 'a';
while (l <= 'z')
{
putchar(l);
l += 1;
}
putchar('\n');
return (0);
}
