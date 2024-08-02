#include "main.h"
#include "2-get_bit.c"
/**
 * flip_bits - function
 * @n: variable
 * @m: variable
 * Return: number of bits change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0, f = 0;

	while (i < 64)
	{
		if (get_bit(n, i) != get_bit(m, i))
		{
			f++;
		}
		i++;
	}
	return (f);
}
