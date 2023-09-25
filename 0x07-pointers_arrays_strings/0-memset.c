#include "main.h"

/**
 * _memset- fills a block of memory with the specific value
 * @s: address  of memory to be filled
 * @n: number of bytes
 * @b: the constant value
 * Return: always return s - n
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
