#include <stdio.h>

/**
 * main - entry point to the program with two command line arguments
 * @argc: command line argument count
 * @argv: array of argument strings
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
