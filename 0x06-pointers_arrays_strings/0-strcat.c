#include "holberton.h"
/**
 *_strcat - concatenates two strings
 *@dest: first string
 *@src: secund string
 *
 *Return: return char
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; src[j] != '\0'; i++, ++j)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}
