#include "main.h"

/**
 * print_line - Main entry
 *
 *@n: varibale
 * Return: print n times '_'
 */
void print_line(int n)
{
	int b = 0;

	if (n > 0)
	{
		while (n > b)
		{
			_putchar('_');
			b++;
		}
	}
	_putchar('\n');
}
