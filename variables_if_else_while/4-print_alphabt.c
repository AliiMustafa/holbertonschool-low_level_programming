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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' && ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
