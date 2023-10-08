#include "main.h"
#include <stdlib.h>

/**
 * _calloc-  function that allocates memory for an array
 * @nmemb:numbers of integers to be allocated
 * @size: size of data type
 * Return: always a pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int Ts, i;
	int *ptr;
	char *k;

	if (nmemb == 0)
	{
	return (NULL);
	}
	if (size == 0)
	{
	return (NULL);
	}
	Ts = nmemb * size;
	ptr = malloc(Ts);
	if (ptr == NULL)
	return (NULL);
	k = (char *)ptr;

	for (i = 0; i < Ts; i++)
	{
	k[i] = 0;
	}
	return (ptr);
}
