#include <stdio.h>
/* more headers goes there */
/**
 * main - entry point
 *
 * Return: if
 */
/* betty style doc for function main goes there */
int main(void)
{
	char ch = 'a';
	char chr = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (chr = 'A'; chr <= 'Z'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
