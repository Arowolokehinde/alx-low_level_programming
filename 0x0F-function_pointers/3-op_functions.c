#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add- fuction that adds
 * @a: first integer
 * @b: second integer
 * Return: always success
*/

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub- fuction that subtract
 * @a: first integer
 * @b: second integer
 * Return: always success
*/

int op_sub(int a, int b)
{
	int difference;

	difference = a - b;
	return (difference);
}

/**
 * op_mul- fuction thatmultiply
 * @a: first integer
 * @b: second integer
 * Return: always success
*/

int op_mul(int a, int b)
{
	int product;

	product = a * b;
	return (product);
}

/**
 * op_div- fuction that divide two number
 * @a: first integer
 * @b: second integer
 * Return: always success
*/

int op_div(int a, int b)
{
	int result;
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = a / b;
	return (result);
}

/**
 * op_mod- fuction that gives remainder
 * @a: first integer
 * @b: second integer
 * Return: always success
*/
int op_mod(int a, int b)
{
	int remainder;
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	remainder = a % b;
	return (remainder);
}
