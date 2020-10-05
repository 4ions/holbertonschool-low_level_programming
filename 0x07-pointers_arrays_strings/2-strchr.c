#include "holberton.h"
/**
 *_strchr - find a char
 *@s: array
 *@c: character to find
 *
 *Return: Return char
 */
char *_strchr(char *s, char c)
{
	int i, l;

	l = 0;

	while (s[l] != '\0')

		l++;

	for (i = 0; i <= l; i++, s++)

	{

		if (*s == c)

			return (s);

	}

	return (0);

}
