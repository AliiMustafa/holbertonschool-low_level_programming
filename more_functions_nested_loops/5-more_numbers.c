#include "main.h"

/**
 * more_numbers - Main entry
 *
 * Return: print numbers 0 to 14 10 times
 */
void more_numbers(void)
{
	int c;
	int v;

	while (v < 10)
	{
		while (c <= 14)
		{
			if (c > 9)
			{
				_putchar(49);
			}
			_putchar('0' + (c % 10));
			c++;
		}
		_putchar('\n');
		v++;
	}
}
