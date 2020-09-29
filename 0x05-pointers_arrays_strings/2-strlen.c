#include "holberton.h"
/**
 * _strlen - swap the length of a string
 *@s: string
 *
 *Return: i  is the length
 */
int _strlen(char *s)
{
int i;
i = 0;

while (s[i] != '\0')
{
i++;
}

return (i);
}
