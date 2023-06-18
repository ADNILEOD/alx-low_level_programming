#include <stdio.h>
/**
 * main - A program that print numbers of base 10
 * Return:0
 */
int main(void)
{
	int n = 9;

	while (n <= 9)
	{
		putchar(n);
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
