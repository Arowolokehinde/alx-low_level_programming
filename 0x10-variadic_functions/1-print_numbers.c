#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers-  function that prints numbers, followed by a new line.
 * @separator: for string
 * @n: integer
 * Return: always success
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, next_arg = 0;
	va_list print;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		next_arg = va_arg(print, unsigned int);
		printf("%u", next_arg);

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
		va_end(print);

		printf("\n");
}
