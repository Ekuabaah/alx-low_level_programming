#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Where the code starts
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphas;

	for (alphas = 'a'; alphas <= 'z'; alphas++)
		putchar(alphas);
	for (alphas = 'A'; alphas <= 'Z'; alphas++)
		putchar(alphas);
	putchar('\n');
	return (0);
}
