#include "main.h"

/**
 * print_triangle - Main entry
 *
 *@size: varibale
 * Return: prints half of the square of size
 */
void print_triangle(int size)
{
	int o;
	int v;
	int b;

	if (size > 0)
	{
		for (b = 0; b < size; b++)
		{
			for (v = 0; v < (size - b - 1); v++)
			{
				_putchar(' ');
			}
			for (o = (size - v); o > 0; o--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
