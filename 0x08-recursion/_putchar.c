#include <unistd.h>
/**
 * -putchar - prints characters of the variable c unto the screen.
 * Return: 1 on success
 * on error, -1 is returned.
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
