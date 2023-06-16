#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - A program that prints last number of n
 * Return:0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char charN[] = n.toString().ToCharArray();
	int size = charN.Length;
	int lastNumb = Integer.parse(charN[size - 1]);

	if (lastNumb < 5)
	{
		printf("Last digit of %d is %d and is less than 5 and not 0\n", n, lastNumb);
	}
	else if (lastNumb == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastNumb);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNumb);
	}
	return (0);
}
