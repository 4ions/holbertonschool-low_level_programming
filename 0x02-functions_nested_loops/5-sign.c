#include "holberton.h"
/**
 * print_sign - returns 1 if its greater than 0, 0 if its 0, and -1 if less.
 * Also prints the sign.
 * @n: An integer number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
