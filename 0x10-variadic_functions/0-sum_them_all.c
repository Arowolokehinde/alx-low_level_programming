#include "variadic_functions.h"
#include <stdarg.h>

/**
 *  sum_them_all- function that returns the sum of all its parameters.
 *  @n: the number of integer to be counted
 *  Return: always success
*/


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list number;

	if (n == 0)
	return (0);

	va_start(number, n);

	for (i = 0; i < n; i++)
	{
	sum = sum + va_arg(number, unsigned int);
	}
	va_end(number);
	return (sum);
}
