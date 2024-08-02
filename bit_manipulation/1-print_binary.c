#include "main.h"

/**
 * print_binary - function
 * @n: variable
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int p = 1;

	while (n >= p * 2)
	{
		p = p * 2;
		if (p == (ULONG_MAX >> 1) + 1)
		{
			break;
		}
	}
	while (p)
	{
		if (n >= p)
		{
			_putchar('1');
			n = n - p;
		}
		else
		{
			_putchar('0');
		}
		p = p >> 1;
	}
}
