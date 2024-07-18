#include "main.h"

/**
 * times_table - function
 * Return: table
 */

void times_table(void)
{
	int  number, i, n;
	number = 0;
	while (number <= 9)
	{
		_putchar('0');
		i = number;
		for (n = 0; n < 9; n++)
		{
			_putchar(',');
			if (i < 10)
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(i + '0');
			}
			else
			{
			_putchar(' ');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			}
			i = i + number;
		}
		_putchar('\n');
		number++;
	}
}
