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
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
