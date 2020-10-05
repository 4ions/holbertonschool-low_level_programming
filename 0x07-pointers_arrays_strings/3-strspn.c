#include "holberton.h"
/**
 *_strspn - fuction to gets the length
 *@s: initial segment
 *@accept: where find the segments
 *
 *Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{

	int i, k, l, m, j;
	k = 0;
	l = 0;
	m = 0;
	j = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	while (accept[m] != '\0')
	{
		m++;
	}

	for (i = 0; i < l; i++)
	{
		for (k = 0; k < m; k++)
		{
			if (*(s + i) == *(accept + k))
			{
				j += 1;
				break;
			}
		}
		if (k == '\0')
		break;


	}
	return (j);
}
