#include "holberton.h"
/**
 *rev_string - prints a string in rev
 *@s: string in
 *
 *Return: no return
 */
void rev_string(char *s)
{
int i, j, l;
char tmp;
i = 0;
j = 0;

while (s[i] !=  '\0')
{
i++;
}
l = i / 2;
i = i - 1;
while (i >= l)
{
tmp = s[j];
s[j] = s[i];
s[i] = tmp;
i--;
j++;
}


}
