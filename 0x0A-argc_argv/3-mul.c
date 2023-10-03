#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to the program with two command line arguments
 * @argc: command line argument count
 * @argv: array of argument strings
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int mul = num1 * num2;

	printf("%d\n", mul);
	}
		return (0);
}
