#include "main.h"

/**
 * is_prime_helper- function to check if the number is prime
 * @n: the number
 * @i: it is the divisor
 * Return: always 0 success
*/

int is_prime_helper(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	else if (i > n / 2)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
		return (is_prime_helper(n, i + 1));
}
/**
 * is_prime_number-  a function that returns 1 if the input integer is primed
 * @n: the number to be checked
 * Return: always 0 success
*/

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
