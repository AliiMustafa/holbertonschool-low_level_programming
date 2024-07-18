#include "main.h"

/**
 * times_table - function
 * Return: table
 */
void times_table(void)
{
	int i, j, result, tam, kesr;
	char *v = ",";
	char *b = " ";

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 9)
			{
				result = i * j;
				tam = result / 10;
				kesr = result % 10;
				if (tam == 0)
				{
					_putchar('0' + kesr), _putchar('\n');
				}
				else
				{
					_putchar('0' + tam), _putchar('0' + kesr), _putchar('\n');
				}
			}
			else
			{
				result = i * j;
				tam = result / 10;
				kesr = result % 10;
				if (tam == 0)
				{
					_putchar('0' + kesr), _putchar(*v), _putchar(*b), _putchar(*b);
				}
				else
				{
					_putchar('0' + tam), _putchar('0' + kesr);
					_putchar(*v), _putchar(*b);
				}
			}
		}
	}
}
