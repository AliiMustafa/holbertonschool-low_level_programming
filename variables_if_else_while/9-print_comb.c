#include <stdio.h>
/* more headers goes there */
/**
 * main - entry point
 *
 * Return: if
 */
/* betty style doc for function main goes there */
int main(void)
{
	int a = '0';
	char *c = ", ";

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '9')
		{
			putchar(a);
		}
		else
		{
			putchar(a);
			putchar(*c);
		}
	}
	putchar('\n');
	return (0);
}
