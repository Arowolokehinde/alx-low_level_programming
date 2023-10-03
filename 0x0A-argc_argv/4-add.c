#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point to the program with two command line arguments
 * @argc: command line argument count
 * @argv: array of argument strings
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	size_t j;
	int i;
	int num = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
					return (-1);
			}
		}
			 num = atoi(argv[i]);

			sum = sum + num;
	}
			printf("%d\n", sum);

	}
		return (0);
}
