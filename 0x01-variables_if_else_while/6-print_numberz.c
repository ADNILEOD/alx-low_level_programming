#include <stdio.h>
/**
 * main - A program that print numbers of base 10
 * Return:0
 */
int main(void)
{
	int number = 9;
	long values;

	while (number <= 9)
	{
		putchar(number);
		number = number + 1;
	}
	putchar('\n');
	return (0);
}
