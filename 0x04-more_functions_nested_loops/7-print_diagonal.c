#include "holberton.h"
/**
 *print_diagonal - print a diagonal in terminal
 *@n: numbers of times the character / should be printed
 *Return: No return
 */
void print_diagonal(int n)
{
int i, j;
if(n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i - 1; j++)
{

_putchar(' ');

}
_putchar(92);

_putchar('\n');

}
}
else
_putchar('\n');
}
