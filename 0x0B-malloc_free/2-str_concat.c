#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: char 1
 *@s2: char 2
 *
 *Return: Return char
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *a;

	k = 0;
	j = 0;
	l = 0;
	if (s1 == '\0')
	{
		s1 = ("");
	}
	if (s2 == '\0')
	{
		s2 = ("");
	}
	while (s1[j] != '\0')
	{
		j++;
	}
	while (s2[l] != '\0')
	{
		l++;
	}
	a = malloc(sizeof(char) * j + l);
	if (a != '\0')
	{
		for (i = 0; i < j; i++)
		{
			a[i] = s1[i];
		}
		for (k = 0; k < l; k++)
		{
			a[k + i] = s2[k];
		}
	}
	else
	{
		a[j + k] = '\0';
	}
	return (a);
}
