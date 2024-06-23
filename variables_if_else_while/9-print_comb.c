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
	char *c = ",";
	char *ch = " ";

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a == '9')
		{
			continue;
		}
		else
		{
			putchar(*c);
			putchar(*ch);
		}
	}
	putchar('\n');
	return (0);
}
