#include "main.h"
#include <stdlib.h>

/**
 * count_word - function to count the number of words in a string
 * @s:ponter to the string
 * Return: always 0 success
 */
int count_word(char *s)
{
	int flag, i, w;

	flag = 0;
	w = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: always 0 success
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int j, k = 0, len = 0, words, i = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (j = 0; j <= len; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (i)
			{
				end = j;
				tmp = (char *) malloc(sizeof(char) * (i + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - i;
				k++;
				i = 0;
			}
		}
		else if (i++ == 0)
			start = j;
	}

	matrix[k] = NULL;

	return (matrix);
}
