#include "main.h"
#include <stdlib.h>
/**
 * str_concat- function that concatenates two strings.
 * @s1: first pointer
 * @s2: second pointer
 * Return: always 0 success
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	int l1 = 0;
	int l2 = 0;
	int i, j, Tl;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
		l2 = 0;
	while (s2[l2] != '\0')
	{
		l2++;
	}
		Tl = l1 + l2 + 1;
	s = (char *)malloc(Tl * sizeof(char));
		if (s == NULL)
		{
			return (NULL);
		}
	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
			i++;
			j++;
	}
		s[i] = '\0';
		return (s);
}
