#include "main.h"

/**
 * swap_int - Main entry
 * @a: pointer
 * @b: pointer
 * Return: Swap the values of a and b
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;

}
