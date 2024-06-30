#include "main.h"

/**
 * puts_half - Main entry
 * @str: pointer
 * Return: prints half of the string
 */
void puts_half(char *str)
{
	int m = 0;
	int n;

	while (*(str + m) != 0)
	{
		m++;
	}
	if ((m % 2) == 0)
	{
		n = m / 2;
	}
	else
	{
		n = (m - 1) / 2;
		n = m - n;
	}
	while (*(str + n) != 0)
	{
		_putchar(*(str + n));
		n++;
	}

	_putchar('\n');
}
