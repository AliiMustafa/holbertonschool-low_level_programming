#include "main.h"

/**
 * print_diagonal - Main entry
 *
 *@n: varibale
 * Return: print n times ' '  then print '\'
 */
void print_diagonal(int n)
{
	int b;
	int v;

	if (n > 0)
	{
		for (b = 1; b <= n; b++)
		{
			for (v = b; v > 1; v--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
