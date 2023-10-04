#include "main.h"
#include <stdlib.h>


/**
 * *_strdup- function that returns a pointer to a newly allocated space
 * @str: a string
 * Return: always 0 success
*/

char *_strdup(char *str)
{
	char *s;
	int len = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	s = (char *)malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
		s[len] = '\0';
	return (s);
}
