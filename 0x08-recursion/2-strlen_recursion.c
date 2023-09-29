#include "main.h"

/**
 * _strlen_recursion-  a function that prints the length of a string
 * @char *s: ponter to getting the value of the string
 * @s: pointer to the string
 * Return: return void
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
