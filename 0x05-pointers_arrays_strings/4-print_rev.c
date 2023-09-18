#include "main.h"

/**
 * print_rev -  function that prints a string in reverse
 * @s: reverse order
*/

void print_rev(char *s)
{
	int i = 0;
	int k;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (k = i; k > 0; k--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
