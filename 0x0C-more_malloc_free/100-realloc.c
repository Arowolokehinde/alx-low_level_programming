#include "main.h"
#include <stdlib.h>

/**
 * _realloc-  function that reallocates a memory block
 * @ptr: void pointer
 * @old_size:  is the size, in bytes, of the allocated space
 * @new_size: is the new size, in bytes of the new memory block
 * Return: always return pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr_char;
	void *old_ptr;
	char *new_ptr, *old_ptr_char;
	if (ptr == NULL)
	return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}

	old_ptr = ptr;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	return NULL;

	old_ptr_char = (char *)old_ptr;
	new_ptr_char = (char *)new_ptr;

	for (i = 0; i < (old_size < new_size ? old_size : new_size); i++)
	{
	new_ptr_char[i] = old_ptr_char[i];
	}

	free(old_ptr);
	return new_ptr;
}
