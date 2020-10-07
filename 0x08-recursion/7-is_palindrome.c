#include "holberton.h"
/**
 *es_Palindromo - check if a string is palindrome
 *@s: string
 *@index: index
 *
 *Return: int
 */

int es_Palindromo(char *s, int index)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1 - index;
	if (s[index] == s[i])
	{
		if (index + 1 == i || index == i)
		{
			return (1);
		}
		es_Palindromo(s, index + 1);
	}
	else
	{
	return (0);
	}

}

/**
 *is_palindrome - check if a string is palindrome
 *@s: string
 *
 *Return: int
 */
int is_palindrome(char *s)
{
	return (es_Palindromo(s, 0));
}
