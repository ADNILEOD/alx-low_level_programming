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
		putchar(chr);
	}
	for (chr = 65; chr <= 96; chr = chr + 1)
	{
		if (chr > 90 && chr < 97)
		{
			continue;
		}
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
