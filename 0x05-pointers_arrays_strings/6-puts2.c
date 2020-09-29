#include "holberton.h"
/**
 *puts2 - print the character
 *@str: char int
 *
 *Return: No return
 */
void puts2(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
i++;
}
while(j < i)
{
if(j % 2 == 0)
{
_putchar(str[i]);
}
j++;
}
_putchar('\n');
}
