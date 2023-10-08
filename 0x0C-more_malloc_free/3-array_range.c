#include "main.h"
#include <stdlib.h>

/**
 * array_range-  function that creates an array of integers
 * @min: minimum number
 * @max: maximum num
 * Return: always return pointer
*/

int *array_range(int min, int max)
{
	int *p;
	int i;
	int size;

	if (min > max)
	{
	return (NULL);
	}
	size = max - min + 1;
	p = (int *)malloc(size * sizeof(int));
	if (p == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	p[i] = min + i;
	}
	return (p);
}
