#include <stdio.h>
/**
 * main - A program that prints a alphabet
 * Return:0
 */
int main(void)
{
	char chr;

	for (chr = 97; chr <= 122; chr = chr + 1)
	{
		if (chr > 90 && chr < 97)
		{
			continue;
		}
		if (chr != 101 || chr != 113)
		{
			putchar(chr);
		}
	}
	putchar('\n');
	return (0);
}
