#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Main Entry
 * @argc: varaible
 * @argv: pointer
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	long unsigned int j;
	int p = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < (strlen(argv[i])); j++)
		{
			if (isdigit(*(argv[i] + j)) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		if (atoi(argv[i]) < 0)
		{
			continue;
		}
		p = p + atoi(argv[i]);
	}
	printf("%d\n", p);
	return (0);
}
