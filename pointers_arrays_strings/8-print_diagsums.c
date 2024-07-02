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
	int count = 0;
	int esas = (size + 1) * 4;
	int esas1 = (size + 1) * 2;
	int sum1 = 0;
	int sum2 = 0;
	int *p = a;

	while (count < size)
	{
		sum1 = sum1 + *p;
		*p = *(p + esas);
		count++;
	}
	p = a + ((size - 1) * 4);
	count = 0;
	while (count < size)
	{
		sum2 = sum2 + *p;
		*p = *(p + esas1);
		count++;
	}
	printf("%d, %d", sum1, sum2);
	printf("\n");

				
}
