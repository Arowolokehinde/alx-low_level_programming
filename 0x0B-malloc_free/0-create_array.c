#include "main.h"
#include <stdlib.h>

/**
 * create_array-function that creates an array of chars
 * @size: the size of number of memory block to print
 * @c: array of char
 * Return: always 0 success
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
		return (s);
}
