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
	unsigned int j;
	int i, k;
	j= 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for(k = 0; accept[k] != '\0'; k++)
		{
			if (s[k] == accept[i])
			{
				j = j + 1;
			}
		}


	}
	return (j);
}
