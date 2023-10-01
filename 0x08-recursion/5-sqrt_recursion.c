#include "main.h"

/**
 * sqrt_helper - helper function to find the square root
 * @n: the number to find the square root of
 * @g: the current guess for the square root
 * Return: the square root of n if n has a natural square root, otherwise -1
 */
int sqrt_helper(int n, int g)
{
	if (g * g == n)
	{
		return (g);
	}
	if (g * g > n)
	{
		return (-1);
	}
		return (sqrt_helper(n, g + 1));
}

/**
 * _sqrt_recursion- function that returns the natural square root of a number.
 *  @n: this is the number
 *  Return: always 0 success
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_helper(n, 1));
}
