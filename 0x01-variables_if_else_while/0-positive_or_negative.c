#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that checks if n is positive, negative or zero.
 * Return:0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%lu is negative\n ", n);
	}
	else if (n == 0)
	{
		printf("%lu is zero\n", n);
	}
	else
	{
		printf("%lu is positive\n", n);
	}
	return (0);
}
