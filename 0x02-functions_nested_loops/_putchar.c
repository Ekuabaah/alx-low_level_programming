#include <unistd.h>
/**
 * putchar - prints a character to standard output
 * @c: the character that will be printed to standard output
 * Return: 1 on Success
 * On error, -1 is returned, and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
