#include <stdio.h>
/**
 * main - entry point where all the code is
 * Description: low level programming
 * Return: Always 0 success
*/

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	putchar('\n');
	return (0);
}
