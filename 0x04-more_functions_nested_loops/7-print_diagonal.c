#include "main.h"

/**
 * print_diagonal - print increasing diagonal spaces n lines then slash
 * @n: number of lines to be printed
 * Return: Always void
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 0; i < n; i++)
{
int j;
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
