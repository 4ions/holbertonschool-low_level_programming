#include "holberton.h"
/**
 *_strcmp - compare two strings
 *@s1: string 1
 *@s2: string 2
 *
 *Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			j = 0;
		}
		else
		B{
			j = s1[i] - s2[i];
			return (j);
		}
	}
	return (j);
}

