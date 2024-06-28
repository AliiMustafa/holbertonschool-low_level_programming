#include <stdio.h>

/**
 * main- entry point
 *
 * Return: print number 1 to 100 . If number mutiple of 3 prints "Fizz"
 * If multiple of 5 prints "Buzz". If both prints "FizzBuzz"
 * else prints number
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (n == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", n);
		}

	}
	putchar('\n');
	return (0);
}
