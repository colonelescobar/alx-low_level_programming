#include <stdio.h>

/**
 *main - Prints the lowercase alphabet in reverse.
 *Return: 0
 */

int main(void)
{
int n = 122;
while (n > 96)
{
putchar(n);
n -= 1;
}
putchar('\n');

return (0);
}
