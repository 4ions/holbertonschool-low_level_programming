#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - return a pointer to space
 *@str: pointer
 *
 *Return: char
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *cpy;

	j = 0;
	if (str == 0)
		return (0);
	while (str[j] != '\0')
	{
		j++;
	}
	cpy = malloc(sizeof(char) * (j + 1));

	if (cpy != NULL)
	{
		for (i = 0; i < j; i++)
		{
			cpy[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	return (cpy);
}
