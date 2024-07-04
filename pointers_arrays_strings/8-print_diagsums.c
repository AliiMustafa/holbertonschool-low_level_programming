#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - main
 *@a: pointer
 *@size: size
 *Return: diagsums
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	int *p = a;

	for (i = 0; i < size * size;)
	{
		sum1 = sum1 + p[i];
		i = i + (size + 1);
	}
	i = size - 1;
	for (; i < size * size - 2;)
	{
		sum2 = sum2 + p[i];
		i = i + (size - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
