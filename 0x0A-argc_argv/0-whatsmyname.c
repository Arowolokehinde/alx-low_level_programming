#include <stdio.h>

/**
 * main- entry point to the program with two command line arguments
 * @argc: command line argument count
 * @argv: array of argument strings
 * Return: always 0 success
*/

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
