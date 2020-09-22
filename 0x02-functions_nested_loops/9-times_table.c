#include "holberton.h"
/**
 * print_times_table - prints the n times table starting with 0 between 0-15
 * @n: Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
{
if (n < 16 && n > -1)
{
int column, row, sum, h, t, o;

column = 0;
while (column <= n)
{
_putchar('0');
row = 1;
while (row <= n)
{
sum = column *row;
h = sum / 100, t = sum / 10 % 10, o = sum % 10;
_putchar(',');
_putchar(' ');
if (sum > 99)
{
_putchar('0' + h);
_putchar('0' + t);
_putchar('0' + o);
}
else if (sum < 10)
{
_putchar(' ');
_putchar(o + '0');
}
else
{
gcc -Wall -pedantic -Werror -Wextra _putchar.c 9-main.c 9-times_table.c -o 9-times_table

_putchar(t + '0');
_putchar(o + '0');
}
row++;
}
_putchar('\n');
column++;
}
}
