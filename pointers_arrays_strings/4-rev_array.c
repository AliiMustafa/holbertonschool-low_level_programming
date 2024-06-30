#include "main.h"

/**
 *reverse_array - reverses the content of an array of integers.
 *@a: array
 *@n: size
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int temp = 0, l = 0, r = n - 1;

	while (l < n / 2)
	{
		temp = a[r];
		a[r] = a[l];
		a[l] = temp;
		l++;
		r--;
	}
}
