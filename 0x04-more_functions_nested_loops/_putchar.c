#include <unistd.h>

/**
 * _putchar - prints characters
 * @c: parameter
 * Return: character being printed
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
