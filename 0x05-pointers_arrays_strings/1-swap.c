#include "main.h"

/**
 * swap_int - functions that swap the values of the integer.
 * @a: swaps integers
 * @b: swaps integers integers
*/

void swap_int(int *a, int *b)
{
	int k;

	k = *a;

	*a = *b;

	*b = k;
}
