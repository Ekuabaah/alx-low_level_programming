#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Where the code starts
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha, letter, letters;

	letter = 'e';
	letters = 'q';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != letter && alpha != letters)
		       putchar(alpha);
	}
        putchar('\n');
        return (0);
}	
