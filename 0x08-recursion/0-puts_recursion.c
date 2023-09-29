#include "main.h"

/**
 * _puts_recursion-  function that prints a string, followed by a new line.
 * @char *s: pointer to the string
 * Return: termination condition
 * @s: movw the pointer forward
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
