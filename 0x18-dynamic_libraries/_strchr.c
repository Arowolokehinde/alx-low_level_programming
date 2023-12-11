#include "main.h"

/**
 * _strchr -  a pointer to the first occurrence of the character
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */


char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
