#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of n according to certain conditions
 * Return: Always (0) Success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is\n",n);
        int lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("%d and is greater than 5\n", lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("%d and is 0\n", lastdigit);
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
		printf("%d and is less than 6 and is not 0\n", lastdigit);
	}
	return (0);
}
