#include <stdlib.h>
#include <stdio.h>

/**
 * main - Main Entry
 * @argc: varaible
 * @argv: pointer
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int p = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		p = p * atoi(argv[i]);
	}
	printf("%d\n", p);
	return (0);
}
