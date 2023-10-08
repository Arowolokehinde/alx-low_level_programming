#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat-  function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: integer value
 * Return: return pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, Tl;
	unsigned int i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = 0;
	while (s1[l1] != '\0')
	{
		l1++;
	}
	l2 = 0;
	while (s2[l2] != '\0')
		l2++;
	if (n >= l2)
	{
		n = l2;
	}
	Tl = l1 + n + 1;
	p = malloc(Tl);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	for (j = 0; j < n; j++, i++)
	{
		p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
