#include<stdio.h>
/**
 * main - A program that print numbers of base 10
 * Return:0
 */
int main(void)
{
	int number;

number = 0;

	while (number < 9)
	{
		putchar(number + '0');
		number = number++;
	}
	putchar('\n');
	return (0);
}
