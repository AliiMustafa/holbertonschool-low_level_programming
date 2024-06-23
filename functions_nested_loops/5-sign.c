#include "main.h"
/**
 * print_sign - Prints the sign of a number.
 *
 * @n: The number to check and print its sign (integer)
 *
 * Description:
 * This function checks the sign of the integer @n and prints:
 * - '+' if @n is greater than 0, * - '0' if @n is equal
 * to 0, - '-' if @n is less than 0.
 * It then returns:
 * - 1 if @n is positive,
 * - 0 if @n is zero, - (-1) if @n is negative.
 *
 ** Return:
 * Returns 1 if @n is positive,
 * 0 if @n is zero, and (-1) if @n is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
