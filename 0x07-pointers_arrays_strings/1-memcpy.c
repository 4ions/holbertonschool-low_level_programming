#include "holberton.h"
/**
 *_memcpy - copy momery data
 *@dest: destination data
 *@src: origin data
 *@n: bytes from memory area
 *
 *Return: return char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
