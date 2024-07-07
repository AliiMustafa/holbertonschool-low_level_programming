#include "main.h"

/**
 * isprime - main
 * @i: variable
 * @number: variable
 * Return: check number if prime return 1 else 0
 */
int isprime(int i, int number)
{
	if (i < number)
	{
		if ((number % i == 0))
		{
			return (0);
		}
		return (isprime((i + 1), number));
	}
	return (1);
}



/**
 *is_prime_number - main
 *@n: variable
 *Return: if n is prme return 1 else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (isprime(2, n));
}
