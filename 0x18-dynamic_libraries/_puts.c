#include "main.h"

/**
 * _puts - a fumction that prints a string
 * @str: integers
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');

}

