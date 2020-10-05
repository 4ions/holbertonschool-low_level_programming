#include "holberton.h"
/**
 *_memset - function that fills memoty with a constant byte
 *@s: pointer of byte
 *@b: constant
 *@n: bytes of the memory
 *
 *Return: Return char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i <= n - 1; i++)
	{
		s[i] = b;
	}
	return (s);

}
