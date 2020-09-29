#include "holberton.h"
/**
 *print_rev - prints a string in rev
 *@s: string in
 *
 *Return: no return
 */
void print_rev(char *s)
{
int i, j;
i = 0;
while (s[i] != '\0')
{
i++;
}
j = i - 1;

while (j >= 0)

{
_putchar(s[j]);
j--;

}
_putchar('\n');
}
