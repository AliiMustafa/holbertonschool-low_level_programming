#include "main.h"

/**
 * print_square - Main entry
 *
 *@size: varibale
 * Return: print square of size
 */
void print_square(int size)
{
	int n;
	int m;

	if (size > 0)
	{
		for (n = 0; n < size; n++)
		{
			for (m = 0; m < size; m++)
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
