#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings- function that prints strings, followed by a new line
 * @separator: sttring
 * @n: integer
 * Return: always 0
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *next_arg = 0;
	va_list string;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
	next_arg = va_arg(string, char *);
	if (next_arg == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", next_arg);
	}
	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);
	}
	}
	va_end(string);
	printf("\n");
}
