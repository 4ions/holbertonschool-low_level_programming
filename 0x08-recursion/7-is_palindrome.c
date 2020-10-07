#include "holberton.h"
/**
 *es_palindromo - check if a string is palindrome
 *@s: string
 *@index: index
 *
 *Return: int
 */

int es_palindromo(char *s, int index)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1 - index;
	if (s[index] != s[i])
	{
		return (0);
	}
	else if (s[index] == s[i])
	{
		if (index + 1 == i || index == i)
		{
			return (1);
		}
		es_palindromo(s, index + 1);
	}
	return (1);
}

/**
 *is_palindrome - check if a string is palindrome
 *@s: string
 *
 *Return: int
 */
int is_palindrome(char *s)
{
	return (es_palindromo(s, 0));
}
