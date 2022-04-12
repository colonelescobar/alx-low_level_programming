#include <stdio.h>

/**
 *main - Program that prints the alphabet in lower case, and then in uppercase.
 *You can only use putchar
 *Return: 0
 */

int main(void)
{
int lw = 'a';
int up = 'A';
while (lw <= 'z')
{
putchar(lw);
lw += 1;
}
while (up <= 'Z')
{
putchar(up);
up += 1;
}
putchar('\n');
return (0);
}
