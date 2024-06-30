#include "main.h"

/**
 * print_rev - Main entry
 * @s: pointer
 * Return: prints the string reverse
 */
void print_rev(char *s)
{
	int m = 0;
	int i;

	while (*(s + m) != 0)
	{
		m++;
	}
	for (i = (m - 1); i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
