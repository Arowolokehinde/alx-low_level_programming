#include "main.h"

/**
 *_pow_recursion- a function that raised x to the power of y
 * @x:it is raised to the power of y
 * @y: it is the power
 * Return: always 0 success
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x *  _pow_recursion(x, y - 1));
}
