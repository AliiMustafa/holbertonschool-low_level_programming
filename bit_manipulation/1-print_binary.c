#include "main.h"

/**
 * print_binary - function
 * @n: variable
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int p = 1;

	while (n >= p * 2)
	{
		p = p * 2;
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
