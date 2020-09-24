#include "holberton.h"
/**
 *print_triangle - Funtion to print a triangule
 *@size: size of triangule
 *Return: no return
 */
void print_triangle(int size)
{

int i, j;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (size - j < i)
{
_putchar('#');
}
else
{
_putchar(' ');
}

}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
